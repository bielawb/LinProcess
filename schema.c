/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <ctype.h>
#include <MI.h>
#include "Process.h"

/*
**==============================================================================
**
** Schema Declaration
**
**==============================================================================
*/

extern MI_SchemaDecl schemaDecl;

/*
**==============================================================================
**
** Qualifier declarations
**
**==============================================================================
*/

/*
**==============================================================================
**
** Process
**
**==============================================================================
*/

/* property Process.PID */
static MI_CONST MI_PropertyDecl Process_PID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00706403, /* code */
    MI_T("PID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, PID), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.ParentID */
static MI_CONST MI_PropertyDecl Process_ParentID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706408, /* code */
    MI_T("ParentID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, ParentID), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.VmSize */
static MI_CONST MI_PropertyDecl Process_VmSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00766506, /* code */
    MI_T("VmSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, VmSize), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.VmHWM */
static MI_CONST MI_PropertyDecl Process_VmHWM_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00766D05, /* code */
    MI_T("VmHWM"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, VmHWM), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.cmdline */
static MI_CONST MI_PropertyDecl Process_cmdline_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636507, /* code */
    MI_T("cmdline"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, cmdline), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.exe */
static MI_CONST MI_PropertyDecl Process_exe_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656503, /* code */
    MI_T("exe"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, exe), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.Name */
static MI_CONST MI_PropertyDecl Process_Name_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, Name), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.State */
static MI_CONST MI_PropertyDecl Process_State_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736505, /* code */
    MI_T("State"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, State), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

/* property Process.OwnerID */
static MI_CONST MI_PropertyDecl Process_OwnerID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6407, /* code */
    MI_T("OwnerID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process, OwnerID), /* offset */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Process_props[] =
{
    &Process_PID_prop,
    &Process_ParentID_prop,
    &Process_VmSize_prop,
    &Process_VmHWM_prop,
    &Process_cmdline_prop,
    &Process_exe_prop,
    &Process_Name_prop,
    &Process_State_prop,
    &Process_OwnerID_prop,
};

/* parameter Process.Kill(): sig */
static MI_CONST MI_ParameterDecl Process_Kill_sig_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00736703, /* code */
    MI_T("sig"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process_Kill, sig), /* offset */
};

/* parameter Process.Kill(): MIReturn */
static MI_CONST MI_ParameterDecl Process_Kill_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Process_Kill, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST Process_Kill_params[] =
{
    &Process_Kill_MIReturn_param,
    &Process_Kill_sig_param,
};

/* method Process.Kill() */
MI_CONST MI_MethodDecl Process_Kill_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006B6C04, /* code */
    MI_T("Kill"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    Process_Kill_params, /* parameters */
    MI_COUNT(Process_Kill_params), /* numParameters */
    sizeof(Process_Kill), /* size */
    MI_UINT32, /* returnType */
    MI_T("Lin_Process"), /* origin */
    MI_T("Lin_Process"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)Process_Invoke_Kill, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST Process_meths[] =
{
    &Process_Kill_rtti,
};

static MI_CONST MI_ProviderFT Process_funcs =
{
  (MI_ProviderFT_Load)Process_Load,
  (MI_ProviderFT_Unload)Process_Unload,
  (MI_ProviderFT_GetInstance)Process_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Process_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Process_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Process_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Process_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class Process */
MI_CONST MI_ClassDecl Process_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006C730B, /* code */
    MI_T("Lin_Process"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    Process_props, /* properties */
    MI_COUNT(Process_props), /* numProperties */
    sizeof(Process), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    Process_meths, /* methods */
    MI_COUNT(Process_meths), /* numMethods */
    &schemaDecl, /* schema */
    &Process_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** __mi_server
**
**==============================================================================
*/

MI_Server* __mi_server;
/*
**==============================================================================
**
** Schema
**
**==============================================================================
*/

static MI_ClassDecl MI_CONST* MI_CONST classes[] =
{
    &Process_rtti,
};

MI_SchemaDecl schemaDecl =
{
    NULL, /* qualifierDecls */
    0, /* numQualifierDecls */
    classes, /* classDecls */
    MI_COUNT(classes), /* classDecls */
};

/*
**==============================================================================
**
** MI_Server Methods
**
**==============================================================================
*/

MI_Result MI_CALL MI_Server_GetVersion(
    MI_Uint32* version){
    return __mi_server->serverFT->GetVersion(version);
}

MI_Result MI_CALL MI_Server_GetSystemName(
    const MI_Char** systemName)
{
    return __mi_server->serverFT->GetSystemName(systemName);
}

