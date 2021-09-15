// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Threading_Thread
#define INCLUDE_System_Threading_Thread

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_LocalDataStoreSlot_get_type_handle(void);

SG_HNDL_NONNULL System_LocalDataStoreSlot_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ApartmentState_get_type_handle(void);

int32_t System_Threading_ApartmentState_get_STA(void);

int32_t System_Threading_ApartmentState_get_MTA(void);

int32_t System_Threading_ApartmentState_get_Unknown(void);

TYP System_Threading_CompressedStack_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_CompressedStack_CompressedStack__Capture_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Threading_CompressedStack_CompressedStack__CreateCopy_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_CompressedStack_CompressedStack__GetCompressedStack_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_CompressedStack_void__GetObjectData_0__2__SerializationInfo_StreamingContext(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL info, SG_HNDL_NONNULL context);

void System_Threading_CompressedStack_void__Run_0__3__CompressedStack_ContextCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL compressedStack, SG_HNDL_NONNULL callback, SG_HNDL_NULLABLE state);

SG_HNDL_NONNULL System_Threading_CompressedStack_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ParameterizedThreadStart_get_type_handle(void);

void System_Threading_ParameterizedThreadStart_void__Invoke_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj);

SG_HNDL_NULLABLE System_Threading_ParameterizedThreadStart_IAsyncResult__BeginInvoke_0__3__Object_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_Threading_ParameterizedThreadStart_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Threading_ParameterizedThreadStart_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE obj));

TYP System_Threading_Thread_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_Thread_ctor_0__1__ParameterizedThreadStart(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL start);

SG_HNDL_NONNULL System_Threading_Thread_ctor_0__2__ParameterizedThreadStart_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL start, int32_t maxStackSize);

SG_HNDL_NONNULL System_Threading_Thread_ctor_0__1__ThreadStart(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL start);

SG_HNDL_NONNULL System_Threading_Thread_ctor_0__2__ThreadStart_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL start, int32_t maxStackSize);

void System_Threading_Thread_void__Abort_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__Abort_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE stateInfo);

SG_HNDL_NONNULL System_Threading_Thread_LocalDataStoreSlot__AllocateDataSlot_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Threading_Thread_LocalDataStoreSlot__AllocateNamedDataSlot_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

void System_Threading_Thread_void__BeginCriticalRegion_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__BeginThreadAffinity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__DisableComObjectEagerCleanup_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__EndCriticalRegion_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__EndThreadAffinity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__FreeNamedDataSlot_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

int32_t System_Threading_Thread_ApartmentState__GetApartmentState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_Thread_CompressedStack__GetCompressedStack_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_i32__GetCurrentProcessorId_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Threading_Thread_Object__GetData_0__1__LocalDataStoreSlot(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL slot);

SG_HNDL_NONNULL System_Threading_Thread_AppDomain__GetDomain_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Threading_Thread_i32__GetDomainID_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Threading_Thread_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_Thread_LocalDataStoreSlot__GetNamedDataSlot_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

void System_Threading_Thread_void__Interrupt_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__Join_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_bool__Join_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t millisecondsTimeout);

int32_t System_Threading_Thread_bool__Join_0__1__TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL timeout);

void System_Threading_Thread_void__MemoryBarrier_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__ResetAbort_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__Resume_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__SetApartmentState_0__1__ApartmentState(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t state);

void System_Threading_Thread_void__SetCompressedStack_0__1__CompressedStack(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL stack);

void System_Threading_Thread_void__SetData_0__2__LocalDataStoreSlot_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL slot, SG_HNDL_NULLABLE data);

void System_Threading_Thread_void__Sleep_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t millisecondsTimeout);

void System_Threading_Thread_void__Sleep_0__1__TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL timeout);

void System_Threading_Thread_void__SpinWait_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t iterations);

void System_Threading_Thread_void__Start_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__Start_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE parameter);

void System_Threading_Thread_void__Suspend_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_bool__TrySetApartmentState_0__1__ApartmentState(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t state);

void System_Threading_Thread_void__UnsafeStart_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__UnsafeStart_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE parameter);

uint8_t System_Threading_Thread_u8__VolatileRead_0__1__refu8(SG_HNDL_NULLABLE * _Nonnull __thrown, uint8_t* _Nonnull __address_ref_ptr);

double System_Threading_Thread_f64__VolatileRead_0__1__reff64(SG_HNDL_NULLABLE * _Nonnull __thrown, double* _Nonnull __address_ref_ptr);

int16_t System_Threading_Thread_i16__VolatileRead_0__1__refi16(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t* _Nonnull __address_ref_ptr);

int32_t System_Threading_Thread_i32__VolatileRead_0__1__refi32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t* _Nonnull __address_ref_ptr);

int64_t System_Threading_Thread_i64__VolatileRead_0__1__refi64(SG_HNDL_NULLABLE * _Nonnull __thrown, int64_t* _Nonnull __address_ref_ptr);

intptr_t System_Threading_Thread_IntPtr__VolatileRead_0__1__refIntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, intptr_t* _Nonnull __address_ref_ptr);

SG_HNDL_NULLABLE System_Threading_Thread_Object__VolatileRead_0__1__refObject(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL* _Nonnull __address_ref_ptr);

int8_t System_Threading_Thread_i8__VolatileRead_0__1__refi8(SG_HNDL_NULLABLE * _Nonnull __thrown, int8_t* _Nonnull __address_ref_ptr);

float System_Threading_Thread_f32__VolatileRead_0__1__reff32(SG_HNDL_NULLABLE * _Nonnull __thrown, float* _Nonnull __address_ref_ptr);

uint16_t System_Threading_Thread_u16__VolatileRead_0__1__refu16(SG_HNDL_NULLABLE * _Nonnull __thrown, uint16_t* _Nonnull __address_ref_ptr);

uint32_t System_Threading_Thread_u32__VolatileRead_0__1__refu32(SG_HNDL_NULLABLE * _Nonnull __thrown, uint32_t* _Nonnull __address_ref_ptr);

uint64_t System_Threading_Thread_u64__VolatileRead_0__1__refu64(SG_HNDL_NULLABLE * _Nonnull __thrown, uint64_t* _Nonnull __address_ref_ptr);

SG_HNDL_NONNULL System_Threading_Thread_UIntPtr__VolatileRead_0__1__refUIntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL* _Nonnull __address_ref_ptr);

void System_Threading_Thread_void__VolatileWrite_0__2__refu8_u8(SG_HNDL_NULLABLE * _Nonnull __thrown, uint8_t* _Nonnull __address_ref_ptr, uint8_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__reff64_f64(SG_HNDL_NULLABLE * _Nonnull __thrown, double* _Nonnull __address_ref_ptr, double value);

void System_Threading_Thread_void__VolatileWrite_0__2__refi16_i16(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t* _Nonnull __address_ref_ptr, int16_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refi32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t* _Nonnull __address_ref_ptr, int32_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refi64_i64(SG_HNDL_NULLABLE * _Nonnull __thrown, int64_t* _Nonnull __address_ref_ptr, int64_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refIntPtr_IntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, intptr_t* _Nonnull __address_ref_ptr, intptr_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refObject_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL* _Nonnull __address_ref_ptr, SG_HNDL_NULLABLE value);

void System_Threading_Thread_void__VolatileWrite_0__2__refi8_i8(SG_HNDL_NULLABLE * _Nonnull __thrown, int8_t* _Nonnull __address_ref_ptr, int8_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__reff32_f32(SG_HNDL_NULLABLE * _Nonnull __thrown, float* _Nonnull __address_ref_ptr, float value);

void System_Threading_Thread_void__VolatileWrite_0__2__refu16_u16(SG_HNDL_NULLABLE * _Nonnull __thrown, uint16_t* _Nonnull __address_ref_ptr, uint16_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refu32_u32(SG_HNDL_NULLABLE * _Nonnull __thrown, uint32_t* _Nonnull __address_ref_ptr, uint32_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refu64_u64(SG_HNDL_NULLABLE * _Nonnull __thrown, uint64_t* _Nonnull __address_ref_ptr, uint64_t value);

void System_Threading_Thread_void__VolatileWrite_0__2__refUIntPtr_UIntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL* _Nonnull __address_ref_ptr, SG_HNDL_NONNULL value);

int32_t System_Threading_Thread_bool__Yield_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Threading_Thread_ApartmentState__get_ApartmentState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_ApartmentState_0__1__ApartmentState(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Threading_Thread_CultureInfo__get_CurrentCulture_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_CurrentCulture_0__1__CultureInfo(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NULLABLE System_Threading_Thread_IPrincipal__get_CurrentPrincipal_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Threading_Thread_void__set_CurrentPrincipal_0__1__IPrincipal(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Threading_Thread_Thread__get_CurrentThread_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Threading_Thread_CultureInfo__get_CurrentUICulture_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_CurrentUICulture_0__1__CultureInfo(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NULLABLE System_Threading_Thread_ExecutionContext__get_ExecutionContext_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_bool__get_IsAlive_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_bool__get_IsBackground_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_IsBackground_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Threading_Thread_bool__get_IsThreadPoolThread_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Threading_Thread_i32__get_ManagedThreadId_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Threading_Thread_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_Name_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_Threading_Thread_ThreadPriority__get_Priority_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Threading_Thread_void__set_Priority_0__1__ThreadPriority(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Threading_Thread_ThreadState__get_ThreadState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_Thread_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ThreadAbortException_get_type_handle(void);

SG_HNDL_NULLABLE System_Threading_ThreadAbortException_Object__get_ExceptionState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_ThreadAbortException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ThreadExceptionEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_ThreadExceptionEventArgs_ctor_0__1__Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL t);

SG_HNDL_NONNULL System_Threading_ThreadExceptionEventArgs_Exception__get_Exception_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Threading_ThreadExceptionEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ThreadExceptionEventHandler_get_type_handle(void);

void System_Threading_ThreadExceptionEventHandler_void__Invoke_0__2__Object_ThreadExceptionEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_Threading_ThreadExceptionEventHandler_IAsyncResult__BeginInvoke_0__4__Object_ThreadExceptionEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_Threading_ThreadExceptionEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Threading_ThreadExceptionEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sender, SG_HNDL_NONNULL e));

TYP System_Threading_ThreadInterruptedException_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_ThreadInterruptedException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Threading_ThreadInterruptedException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Threading_ThreadInterruptedException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Threading_ThreadInterruptedException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ThreadPriority_get_type_handle(void);

int32_t System_Threading_ThreadPriority_get_Lowest(void);

int32_t System_Threading_ThreadPriority_get_BelowNormal(void);

int32_t System_Threading_ThreadPriority_get_Normal(void);

int32_t System_Threading_ThreadPriority_get_AboveNormal(void);

int32_t System_Threading_ThreadPriority_get_Highest(void);

TYP System_Threading_ThreadStart_get_type_handle(void);

void System_Threading_ThreadStart_void__Invoke_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Threading_ThreadStart_IAsyncResult__BeginInvoke_0__2__AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_Threading_ThreadStart_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Threading_ThreadStart_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown));

TYP System_Threading_ThreadStartException_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_ThreadStartException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Threading_ThreadState_get_type_handle(void);

int32_t System_Threading_ThreadState_get_Running(void);

int32_t System_Threading_ThreadState_get_StopRequested(void);

int32_t System_Threading_ThreadState_get_SuspendRequested(void);

int32_t System_Threading_ThreadState_get_Background(void);

int32_t System_Threading_ThreadState_get_Unstarted(void);

int32_t System_Threading_ThreadState_get_Stopped(void);

int32_t System_Threading_ThreadState_get_WaitSleepJoin(void);

int32_t System_Threading_ThreadState_get_Suspended(void);

int32_t System_Threading_ThreadState_get_AbortRequested(void);

int32_t System_Threading_ThreadState_get_Aborted(void);

TYP System_Threading_ThreadStateException_get_type_handle(void);

SG_HNDL_NONNULL System_Threading_ThreadStateException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Threading_ThreadStateException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Threading_ThreadStateException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Threading_ThreadStateException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Threading_Thread
