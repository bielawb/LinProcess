/* @migen@ */
#ifndef _Process_Class_Provider_h
#define _Process_Class_Provider_h

#include "Process.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** Process provider class declaration
**
**==============================================================================
*/

class Process_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;

public:
    Process_Class_Provider(
        Module* module);

    ~Process_Class_Provider();

    void Load(
        Context& context);

    void Unload(
        Context& context);

    void EnumerateInstances(
        Context& context,
        const String& nameSpace,
        const PropertySet& propertySet,
        bool keysOnly,
        const MI_Filter* filter);

    void GetInstance(
        Context& context,
        const String& nameSpace,
        const Process_Class& instance,
        const PropertySet& propertySet);

    void GetSingleInstance(
        Context& context,
        const String& nameSpace,
        const Process_Class& instanceName,
        const PropertySet& propertySet);

    void CreateInstance(
        Context& context,
        const String& nameSpace,
        const Process_Class& newInstance);

    void ModifyInstance(
        Context& context,
        const String& nameSpace,
        const Process_Class& modifiedInstance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context& context,
        const String& nameSpace,
        const Process_Class& instance);

    void Invoke_Kill(
        Context& context,
        const String& nameSpace,
        const Process_Class& instanceName,
        const Process_Kill_Class& in);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Process_Class_Provider_h */

