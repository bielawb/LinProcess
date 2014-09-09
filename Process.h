/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Process_h
#define _Process_h

#include <MI.h>

/*
**==============================================================================
**
** Process [Lin_Process]
**
** Keys:
**    PID
**
**==============================================================================
*/

typedef struct _Process
{
    MI_Instance __instance;
    /* Process properties */
    /*KEY*/ MI_ConstUint32Field PID;
    MI_ConstUint32Field ParentID;
    MI_ConstUint64Field VmSize;
    MI_ConstUint64Field VmHWM;
    MI_ConstStringField cmdline;
    MI_ConstStringField exe;
    MI_ConstStringField Name;
    MI_ConstStringField State;
    MI_ConstUint32Field OwnerID;
}
Process;

typedef struct _Process_Ref
{
    Process* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Process_Ref;

typedef struct _Process_ConstRef
{
    MI_CONST Process* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Process_ConstRef;

typedef struct _Process_Array
{
    struct _Process** data;
    MI_Uint32 size;
}
Process_Array;

typedef struct _Process_ConstArray
{
    struct _Process MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Process_ConstArray;

typedef struct _Process_ArrayRef
{
    Process_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Process_ArrayRef;

typedef struct _Process_ConstArrayRef
{
    Process_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Process_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Process_rtti;

MI_INLINE MI_Result MI_CALL Process_Construct(
    Process* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Process_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Clone(
    const Process* self,
    Process** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Process_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Process_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Process_Destruct(Process* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Delete(Process* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Post(
    const Process* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Set_PID(
    Process* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->PID)->value = x;
    ((MI_Uint32Field*)&self->PID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Clear_PID(
    Process* self)
{
    memset((void*)&self->PID, 0, sizeof(self->PID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Set_ParentID(
    Process* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->ParentID)->value = x;
    ((MI_Uint32Field*)&self->ParentID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Clear_ParentID(
    Process* self)
{
    memset((void*)&self->ParentID, 0, sizeof(self->ParentID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Set_VmSize(
    Process* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->VmSize)->value = x;
    ((MI_Uint64Field*)&self->VmSize)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Clear_VmSize(
    Process* self)
{
    memset((void*)&self->VmSize, 0, sizeof(self->VmSize));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Set_VmHWM(
    Process* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->VmHWM)->value = x;
    ((MI_Uint64Field*)&self->VmHWM)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Clear_VmHWM(
    Process* self)
{
    memset((void*)&self->VmHWM, 0, sizeof(self->VmHWM));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Set_cmdline(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Process_SetPtr_cmdline(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Process_Clear_cmdline(
    Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL Process_Set_exe(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Process_SetPtr_exe(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Process_Clear_exe(
    Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL Process_Set_Name(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Process_SetPtr_Name(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Process_Clear_Name(
    Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL Process_Set_State(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Process_SetPtr_State(
    Process* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Process_Clear_State(
    Process* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL Process_Set_OwnerID(
    Process* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->OwnerID)->value = x;
    ((MI_Uint32Field*)&self->OwnerID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Clear_OwnerID(
    Process* self)
{
    memset((void*)&self->OwnerID, 0, sizeof(self->OwnerID));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** Process.Kill()
**
**==============================================================================
*/

typedef struct _Process_Kill
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint32Field sig;
}
Process_Kill;

MI_EXTERN_C MI_CONST MI_MethodDecl Process_Kill_rtti;

MI_INLINE MI_Result MI_CALL Process_Kill_Construct(
    Process_Kill* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &Process_Kill_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Kill_Clone(
    const Process_Kill* self,
    Process_Kill** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL Process_Kill_Destruct(
    Process_Kill* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Kill_Delete(
    Process_Kill* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Kill_Post(
    const Process_Kill* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Process_Kill_Set_MIReturn(
    Process_Kill* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Kill_Clear_MIReturn(
    Process_Kill* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Kill_Set_sig(
    Process_Kill* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->sig)->value = x;
    ((MI_Uint32Field*)&self->sig)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Process_Kill_Clear_sig(
    Process_Kill* self)
{
    memset((void*)&self->sig, 0, sizeof(self->sig));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** Process provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Process_Self Process_Self;

MI_EXTERN_C void MI_CALL Process_Load(
    Process_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Process_Unload(
    Process_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Process_EnumerateInstances(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Process_GetInstance(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Process* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Process_CreateInstance(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Process* newInstance);

MI_EXTERN_C void MI_CALL Process_ModifyInstance(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Process* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Process_DeleteInstance(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Process* instanceName);

MI_EXTERN_C void MI_CALL Process_Invoke_Kill(
    Process_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const Process* instanceName,
    const Process_Kill* in);


/*
**==============================================================================
**
** Process_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Process_Class : public Instance
{
public:
    
    typedef Process Self;
    
    Process_Class() :
        Instance(&Process_rtti)
    {
    }
    
    Process_Class(
        const Process* instanceName,
        bool keysOnly) :
        Instance(
            &Process_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Process_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        Instance(clDecl, instance, keysOnly)
    {
    }
    
    Process_Class(
        const MI_ClassDecl* clDecl) :
        Instance(clDecl)
    {
    }
    
    Process_Class& operator=(
        const Process_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Process_Class(
        const Process_Class& x) :
        Instance(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Process_rtti;
    }

    //
    // Process_Class.PID
    //
    
    const Field<Uint32>& PID() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<Uint32>(n);
    }
    
    void PID(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, PID);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& PID_value() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<Uint32>(n).value;
    }
    
    void PID_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, PID);
        GetField<Uint32>(n).Set(x);
    }
    
    bool PID_exists() const
    {
        const size_t n = offsetof(Self, PID);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void PID_clear()
    {
        const size_t n = offsetof(Self, PID);
        GetField<Uint32>(n).Clear();
    }

    //
    // Process_Class.ParentID
    //
    
    const Field<Uint32>& ParentID() const
    {
        const size_t n = offsetof(Self, ParentID);
        return GetField<Uint32>(n);
    }
    
    void ParentID(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, ParentID);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& ParentID_value() const
    {
        const size_t n = offsetof(Self, ParentID);
        return GetField<Uint32>(n).value;
    }
    
    void ParentID_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, ParentID);
        GetField<Uint32>(n).Set(x);
    }
    
    bool ParentID_exists() const
    {
        const size_t n = offsetof(Self, ParentID);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void ParentID_clear()
    {
        const size_t n = offsetof(Self, ParentID);
        GetField<Uint32>(n).Clear();
    }

    //
    // Process_Class.VmSize
    //
    
    const Field<Uint64>& VmSize() const
    {
        const size_t n = offsetof(Self, VmSize);
        return GetField<Uint64>(n);
    }
    
    void VmSize(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, VmSize);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& VmSize_value() const
    {
        const size_t n = offsetof(Self, VmSize);
        return GetField<Uint64>(n).value;
    }
    
    void VmSize_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, VmSize);
        GetField<Uint64>(n).Set(x);
    }
    
    bool VmSize_exists() const
    {
        const size_t n = offsetof(Self, VmSize);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void VmSize_clear()
    {
        const size_t n = offsetof(Self, VmSize);
        GetField<Uint64>(n).Clear();
    }

    //
    // Process_Class.VmHWM
    //
    
    const Field<Uint64>& VmHWM() const
    {
        const size_t n = offsetof(Self, VmHWM);
        return GetField<Uint64>(n);
    }
    
    void VmHWM(const Field<Uint64>& x)
    {
        const size_t n = offsetof(Self, VmHWM);
        GetField<Uint64>(n) = x;
    }
    
    const Uint64& VmHWM_value() const
    {
        const size_t n = offsetof(Self, VmHWM);
        return GetField<Uint64>(n).value;
    }
    
    void VmHWM_value(const Uint64& x)
    {
        const size_t n = offsetof(Self, VmHWM);
        GetField<Uint64>(n).Set(x);
    }
    
    bool VmHWM_exists() const
    {
        const size_t n = offsetof(Self, VmHWM);
        return GetField<Uint64>(n).exists ? true : false;
    }
    
    void VmHWM_clear()
    {
        const size_t n = offsetof(Self, VmHWM);
        GetField<Uint64>(n).Clear();
    }

    //
    // Process_Class.cmdline
    //
    
    const Field<String>& cmdline() const
    {
        const size_t n = offsetof(Self, cmdline);
        return GetField<String>(n);
    }
    
    void cmdline(const Field<String>& x)
    {
        const size_t n = offsetof(Self, cmdline);
        GetField<String>(n) = x;
    }
    
    const String& cmdline_value() const
    {
        const size_t n = offsetof(Self, cmdline);
        return GetField<String>(n).value;
    }
    
    void cmdline_value(const String& x)
    {
        const size_t n = offsetof(Self, cmdline);
        GetField<String>(n).Set(x);
    }
    
    bool cmdline_exists() const
    {
        const size_t n = offsetof(Self, cmdline);
        return GetField<String>(n).exists ? true : false;
    }
    
    void cmdline_clear()
    {
        const size_t n = offsetof(Self, cmdline);
        GetField<String>(n).Clear();
    }

    //
    // Process_Class.exe
    //
    
    const Field<String>& exe() const
    {
        const size_t n = offsetof(Self, exe);
        return GetField<String>(n);
    }
    
    void exe(const Field<String>& x)
    {
        const size_t n = offsetof(Self, exe);
        GetField<String>(n) = x;
    }
    
    const String& exe_value() const
    {
        const size_t n = offsetof(Self, exe);
        return GetField<String>(n).value;
    }
    
    void exe_value(const String& x)
    {
        const size_t n = offsetof(Self, exe);
        GetField<String>(n).Set(x);
    }
    
    bool exe_exists() const
    {
        const size_t n = offsetof(Self, exe);
        return GetField<String>(n).exists ? true : false;
    }
    
    void exe_clear()
    {
        const size_t n = offsetof(Self, exe);
        GetField<String>(n).Clear();
    }

    //
    // Process_Class.Name
    //
    
    const Field<String>& Name() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n);
    }
    
    void Name(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n) = x;
    }
    
    const String& Name_value() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).value;
    }
    
    void Name_value(const String& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Set(x);
    }
    
    bool Name_exists() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Name_clear()
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Clear();
    }

    //
    // Process_Class.State
    //
    
    const Field<String>& State() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n);
    }
    
    void State(const Field<String>& x)
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n) = x;
    }
    
    const String& State_value() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n).value;
    }
    
    void State_value(const String& x)
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n).Set(x);
    }
    
    bool State_exists() const
    {
        const size_t n = offsetof(Self, State);
        return GetField<String>(n).exists ? true : false;
    }
    
    void State_clear()
    {
        const size_t n = offsetof(Self, State);
        GetField<String>(n).Clear();
    }

    //
    // Process_Class.OwnerID
    //
    
    const Field<Uint32>& OwnerID() const
    {
        const size_t n = offsetof(Self, OwnerID);
        return GetField<Uint32>(n);
    }
    
    void OwnerID(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, OwnerID);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& OwnerID_value() const
    {
        const size_t n = offsetof(Self, OwnerID);
        return GetField<Uint32>(n).value;
    }
    
    void OwnerID_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, OwnerID);
        GetField<Uint32>(n).Set(x);
    }
    
    bool OwnerID_exists() const
    {
        const size_t n = offsetof(Self, OwnerID);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void OwnerID_clear()
    {
        const size_t n = offsetof(Self, OwnerID);
        GetField<Uint32>(n).Clear();
    }
};

typedef Array<Process_Class> Process_ClassA;

class Process_Kill_Class : public Instance
{
public:
    
    typedef Process_Kill Self;
    
    Process_Kill_Class() :
        Instance(&Process_Kill_rtti)
    {
    }
    
    Process_Kill_Class(
        const Process_Kill* instanceName,
        bool keysOnly) :
        Instance(
            &Process_Kill_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Process_Kill_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        Instance(clDecl, instance, keysOnly)
    {
    }
    
    Process_Kill_Class(
        const MI_ClassDecl* clDecl) :
        Instance(clDecl)
    {
    }
    
    Process_Kill_Class& operator=(
        const Process_Kill_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Process_Kill_Class(
        const Process_Kill_Class& x) :
        Instance(x)
    {
    }

    //
    // Process_Kill_Class.MIReturn
    //
    
    const Field<Uint32>& MIReturn() const
    {
        const size_t n = offsetof(Self, MIReturn);
        return GetField<Uint32>(n);
    }
    
    void MIReturn(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, MIReturn);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& MIReturn_value() const
    {
        const size_t n = offsetof(Self, MIReturn);
        return GetField<Uint32>(n).value;
    }
    
    void MIReturn_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, MIReturn);
        GetField<Uint32>(n).Set(x);
    }
    
    bool MIReturn_exists() const
    {
        const size_t n = offsetof(Self, MIReturn);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void MIReturn_clear()
    {
        const size_t n = offsetof(Self, MIReturn);
        GetField<Uint32>(n).Clear();
    }

    //
    // Process_Kill_Class.sig
    //
    
    const Field<Uint32>& sig() const
    {
        const size_t n = offsetof(Self, sig);
        return GetField<Uint32>(n);
    }
    
    void sig(const Field<Uint32>& x)
    {
        const size_t n = offsetof(Self, sig);
        GetField<Uint32>(n) = x;
    }
    
    const Uint32& sig_value() const
    {
        const size_t n = offsetof(Self, sig);
        return GetField<Uint32>(n).value;
    }
    
    void sig_value(const Uint32& x)
    {
        const size_t n = offsetof(Self, sig);
        GetField<Uint32>(n).Set(x);
    }
    
    bool sig_exists() const
    {
        const size_t n = offsetof(Self, sig);
        return GetField<Uint32>(n).exists ? true : false;
    }
    
    void sig_clear()
    {
        const size_t n = offsetof(Self, sig);
        GetField<Uint32>(n).Clear();
    }
};

typedef Array<Process_Kill_Class> Process_Kill_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Process_h */
