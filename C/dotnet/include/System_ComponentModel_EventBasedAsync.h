// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_ComponentModel_EventBasedAsync
#define INCLUDE_System_ComponentModel_EventBasedAsync

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_ComponentModel_AsyncCompletedEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_ComponentModel_AsyncCompletedEventArgs_ctor_0__3__Exception_bool_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE error, int32_t cancelled, SG_HNDL_NULLABLE userState);

int32_t System_ComponentModel_AsyncCompletedEventArgs_bool__get_Cancelled_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_AsyncCompletedEventArgs_Exception__get_Error_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_AsyncCompletedEventArgs_Object__get_UserState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ComponentModel_AsyncCompletedEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ComponentModel_AsyncCompletedEventHandler_get_type_handle(void);

void System_ComponentModel_AsyncCompletedEventHandler_void__Invoke_0__2__Object_AsyncCompletedEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_ComponentModel_AsyncCompletedEventHandler_IAsyncResult__BeginInvoke_0__4__Object_AsyncCompletedEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_ComponentModel_AsyncCompletedEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_ComponentModel_AsyncCompletedEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));

TYP System_ComponentModel_AsyncOperation_get_type_handle(void);

void System_ComponentModel_AsyncOperation_void__OperationCompleted_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_AsyncOperation_void__Post_0__2__SendOrPostCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL d, SG_HNDL_NULLABLE arg);

void System_ComponentModel_AsyncOperation_void__PostOperationCompleted_0__2__SendOrPostCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL d, SG_HNDL_NULLABLE arg);

SG_HNDL_NONNULL System_ComponentModel_AsyncOperation_SynchronizationContext__get_SynchronizationContext_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_AsyncOperation_Object__get_UserSuppliedState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ComponentModel_AsyncOperation_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_ComponentModel_AsyncOperationManager_AsyncOperation__CreateOperation_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE userSuppliedState);

SG_HNDL_NONNULL System_ComponentModel_AsyncOperationManager_SynchronizationContext__get_SynchronizationContext_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_ComponentModel_AsyncOperationManager_void__set_SynchronizationContext_0__1__SynchronizationContext(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

TYP System_ComponentModel_BackgroundWorker_get_type_handle(void);

SG_HNDL_NONNULL System_ComponentModel_BackgroundWorker_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_ComponentModel_BackgroundWorker_void__CancelAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_BackgroundWorker_void__ReportProgress_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t percentProgress);

void System_ComponentModel_BackgroundWorker_void__ReportProgress_0__2__i32_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t percentProgress, SG_HNDL_NULLABLE userState);

void System_ComponentModel_BackgroundWorker_void__RunWorkerAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_BackgroundWorker_void__RunWorkerAsync_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE argument);

int32_t System_ComponentModel_BackgroundWorker_bool__get_CancellationPending_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_ComponentModel_BackgroundWorker_bool__get_IsBusy_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_ComponentModel_BackgroundWorker_bool__get_WorkerReportsProgress_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_BackgroundWorker_void__set_WorkerReportsProgress_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_ComponentModel_BackgroundWorker_bool__get_WorkerSupportsCancellation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_BackgroundWorker_void__set_WorkerSupportsCancellation_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

void System_ComponentModel_BackgroundWorker_void__add_DoWork_0__1__DoWorkEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_ComponentModel_BackgroundWorker_void__remove_DoWork_0__1__DoWorkEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_ComponentModel_BackgroundWorker_void__add_ProgressChanged_0__1__ProgressChangedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_ComponentModel_BackgroundWorker_void__remove_ProgressChanged_0__1__ProgressChangedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_ComponentModel_BackgroundWorker_void__add_RunWorkerCompleted_0__1__RunWorkerCompletedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_ComponentModel_BackgroundWorker_void__remove_RunWorkerCompleted_0__1__RunWorkerCompletedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_ComponentModel_BackgroundWorker_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ComponentModel_DoWorkEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_ComponentModel_DoWorkEventArgs_ctor_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE argument);

SG_HNDL_NULLABLE System_ComponentModel_DoWorkEventArgs_Object__get_Argument_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_DoWorkEventArgs_Object__get_Result_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ComponentModel_DoWorkEventArgs_void__set_Result_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_ComponentModel_DoWorkEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ComponentModel_DoWorkEventHandler_get_type_handle(void);

void System_ComponentModel_DoWorkEventHandler_void__Invoke_0__2__Object_DoWorkEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_ComponentModel_DoWorkEventHandler_IAsyncResult__BeginInvoke_0__4__Object_DoWorkEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_ComponentModel_DoWorkEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_ComponentModel_DoWorkEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));

TYP System_ComponentModel_ProgressChangedEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_ComponentModel_ProgressChangedEventArgs_ctor_0__2__i32_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t progressPercentage, SG_HNDL_NULLABLE userState);

int32_t System_ComponentModel_ProgressChangedEventArgs_i32__get_ProgressPercentage_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_ProgressChangedEventArgs_Object__get_UserState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ComponentModel_ProgressChangedEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ComponentModel_ProgressChangedEventHandler_get_type_handle(void);

void System_ComponentModel_ProgressChangedEventHandler_void__Invoke_0__2__Object_ProgressChangedEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_ComponentModel_ProgressChangedEventHandler_IAsyncResult__BeginInvoke_0__4__Object_ProgressChangedEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_ComponentModel_ProgressChangedEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_ComponentModel_ProgressChangedEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));

TYP System_ComponentModel_RunWorkerCompletedEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_ComponentModel_RunWorkerCompletedEventArgs_ctor_0__3__Object_Exception_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE result, SG_HNDL_NULLABLE error, int32_t cancelled);

SG_HNDL_NULLABLE System_ComponentModel_RunWorkerCompletedEventArgs_Object__get_Result_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_ComponentModel_RunWorkerCompletedEventArgs_Object__get_UserState_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ComponentModel_RunWorkerCompletedEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ComponentModel_RunWorkerCompletedEventHandler_get_type_handle(void);

void System_ComponentModel_RunWorkerCompletedEventHandler_void__Invoke_0__2__Object_RunWorkerCompletedEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_ComponentModel_RunWorkerCompletedEventHandler_IAsyncResult__BeginInvoke_0__4__Object_RunWorkerCompletedEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_ComponentModel_RunWorkerCompletedEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_ComponentModel_RunWorkerCompletedEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_ComponentModel_EventBasedAsync

