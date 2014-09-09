/* @migen@ */
#include <MI.h>
#include "Process_Class_Provider.h"
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

MI_BEGIN_NAMESPACE

Process_Class_Provider::Process_Class_Provider(
    Module* module) :
    m_Module(module)
{
}

Process_Class_Provider::~Process_Class_Provider()
{
}

void Process_Class_Provider::Load(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void Process_Class_Provider::Unload(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void Process_Class_Provider::EnumerateInstances(
    Context& context,
    const String& nameSpace,
    const PropertySet& propertySet,
    bool keysOnly,
    const MI_Filter* filter)
{
  DIR *pdir;
  struct dirent *pent;
  int flag = 0;

  regex_t reg;
  const char *regex = "^[0-9]+$";
  regmatch_t matches[2];
  
  regcomp(&reg, regex, REG_EXTENDED);
   
  pdir = opendir("/proc");
  if (!pdir)
  {
      context.Post(MI_RESULT_NOT_FOUND);
  } 
  else
  {
    while ((pent = readdir(pdir)))
    {
  
      if (regexec(&reg, pent->d_name, 2, matches, 0) == 0)
      {
	Process_Class proc;
	proc.PID_value(atoi(pent->d_name));
	flag = 1;
	
	if (keysOnly)
	{
	  context.Post(proc);
	}
	else
	{
	  GetSingleInstance(context, nameSpace, proc, propertySet);
	}
      }
    }
  }
  closedir(pdir);
  if (flag == 1)
  {
    context.Post(MI_RESULT_OK);
  }
  else
  {
    context.Post(MI_RESULT_NOT_FOUND);
  }
}

void Process_Class_Provider::GetInstance(
    Context& context,
    const String& nameSpace,
    const Process_Class& instanceName,
    const PropertySet& propertySet)
{
  DIR *pdir;
  char Path[20];  
  
  (void)sprintf(Path,"/proc/%d",instanceName.PID_value());
  pdir = opendir(Path);
  if (!pdir)
  {
    context.Post(MI_RESULT_NOT_FOUND);
  } 
  else
  {
    GetSingleInstance(context, nameSpace, instanceName, propertySet);
    context.Post(MI_RESULT_OK);
  }
  closedir(pdir);

}

void Process_Class_Provider::GetSingleInstance(
    Context& context,
    const String& nameSpace,
    const Process_Class& instanceName,
    const PropertySet& propertySet)
{
  regex_t  regId, regParent, regVmSize, regVmHWM;
  regex_t regName, regState;

  const char *regexId = 	"Uid:[^0-9]*([0-9]+)";
  const char *regexParent = 	"PPid:[^0-9]*([0-9]+)";
  const char *regexVmSize = 	"VmSize:[^0-9]*([0-9]+)";
  const char *regexVmHWM = 	"VmHWM:[^0-9]*([0-9]+)";
  const char *regexName = 	"Name:[^a-zA-Z0-9]*([a-zA-Z0-9-]+)";
  const char *regexState = 	"State:[^A-Z]*([A-Z])";

  regcomp(&regId, 	regexId, 	REG_EXTENDED);
  regcomp(&regParent, 	regexParent, 	REG_EXTENDED);
  regcomp(&regVmSize, 	regexVmSize, 	REG_EXTENDED);
  regcomp(&regVmHWM, 	regexVmHWM, 	REG_EXTENDED);
  regcomp(&regName, 	regexName, 	REG_EXTENDED);
  regcomp(&regState, 	regexState, 	REG_EXTENDED);

  regmatch_t matches[2];

  
  FILE *file;
  char *uid, *Property;  
  char buffer[4096];
  char Path[20];
  char Target[512];
  int Length;
  
  Process_Class proc;
  proc.PID_value(instanceName.PID_value());
  // Adding cmdline property 
  (void)sprintf(Path,"/proc/%d/cmdline", instanceName.PID_value());
  file = fopen(Path,"r");
  Length = fread(buffer, 1, 4096, file);
  if (Length > 0)
  {
    buffer[Length] = '\0';
    proc.cmdline_value(buffer);
  }
  else
  {
    proc.cmdline_value("");
  }
  fclose(file);	
  // Adding exe property 
  (void)sprintf(Path,"/proc/%d/exe", instanceName.PID_value());
  Length = readlink(Path,Target,sizeof(Target));
  if (Length >= 0)
  {
    Target[Length] = '\0';
    proc.exe_value(Target);
  }
  
  // Time to read me some status, baby!
  (void)sprintf(Path,"/proc/%d/status", instanceName.PID_value());
  file = fopen(Path,"r");
  fread(buffer, 1, 4096, file);
  fclose(file);
  uid = buffer;
  
  // adding OwnerID
  if (regexec(&regId, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    proc.OwnerID_value(atoi(uid));
  }
  
  // adding ParentId
  if (regexec(&regParent, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    proc.ParentID_value(atoi(uid));
  }
  
  // VmSize..
  if (regexec(&regVmSize, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    proc.VmSize_value(atoi(uid));
  }

  // VmHWM
  if (regexec(&regVmHWM, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    proc.VmHWM_value(atoi(uid));
  }

  // Name...
  if (regexec(&regName, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    Length = matches[1].rm_eo - matches[1].rm_so;
    Property = (char*)malloc(Length);
    strncpy(Property, uid, Length);
    Property[Length] = '\0';
    proc.Name_value(Property);
  }
  
  // State...
  if (regexec(&regState, buffer, 2, matches, 0) == 0)
  {
    uid = buffer;
    uid += matches[1].rm_so;
    Length = matches[1].rm_eo - matches[1].rm_so;
    Property = (char*)malloc(Length);
    strncpy(Property, uid, Length);
    Property[Length] = '\0';
    proc.State_value(Property);
  }
  
  // emit object...
  context.Post(proc);
}

void Process_Class_Provider::CreateInstance(
    Context& context,
    const String& nameSpace,
    const Process_Class& newInstance)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Process_Class_Provider::ModifyInstance(
    Context& context,
    const String& nameSpace,
    const Process_Class& modifiedInstance,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Process_Class_Provider::DeleteInstance(
    Context& context,
    const String& nameSpace,
    const Process_Class& instanceName)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Process_Class_Provider::Invoke_Kill(
    Context& context,
    const String& nameSpace,
    const Process_Class& instanceName,
    const Process_Kill_Class& in)
{
    int sig = 9;
    int ret = 0;
    Process_Kill_Class out;
    if (in.sig_exists())
    {
      sig = in.sig_value();
    }
    
    ret = kill (instanceName.PID_value(), sig);
    out.MIReturn_value(ret);
    context.Post(out);
    context.Post(MI_RESULT_OK);
}


MI_END_NAMESPACE
