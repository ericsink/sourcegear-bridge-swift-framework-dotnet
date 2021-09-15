// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Transactions_Local
#define INCLUDE_System_Transactions_Local

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Transactions_CommittableTransaction_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_CommittableTransaction_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_CommittableTransaction_ctor_0__1__TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL timeout);

SG_HNDL_NONNULL System_Transactions_CommittableTransaction_ctor_0__1__TransactionOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL options);

SG_HNDL_NONNULL System_Transactions_CommittableTransaction_IAsyncResult__BeginCommit_0__2__AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

void System_Transactions_CommittableTransaction_void__Commit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_CommittableTransaction_void__EndCommit_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

SG_HNDL_NONNULL System_Transactions_CommittableTransaction_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_DependentCloneOption_get_type_handle(void);

int32_t System_Transactions_DependentCloneOption_get_BlockCommitUntilComplete(void);

int32_t System_Transactions_DependentCloneOption_get_RollbackIfNotComplete(void);

TYP System_Transactions_DependentTransaction_get_type_handle(void);

void System_Transactions_DependentTransaction_void__Complete_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_DependentTransaction_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_Enlistment_get_type_handle(void);

void System_Transactions_Enlistment_void__Done_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Enlistment_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_EnlistmentOptions_get_type_handle(void);

int32_t System_Transactions_EnlistmentOptions_get_None(void);

int32_t System_Transactions_EnlistmentOptions_get_EnlistDuringPrepareRequired(void);

TYP System_Transactions_EnterpriseServicesInteropOption_get_type_handle(void);

int32_t System_Transactions_EnterpriseServicesInteropOption_get_None(void);

int32_t System_Transactions_EnterpriseServicesInteropOption_get_Automatic(void);

int32_t System_Transactions_EnterpriseServicesInteropOption_get_Full(void);

TYP System_Transactions_HostCurrentTransactionCallback_get_type_handle(void);

SG_HNDL_NULLABLE System_Transactions_HostCurrentTransactionCallback_Transaction__Invoke_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Transactions_HostCurrentTransactionCallback_IAsyncResult__BeginInvoke_0__2__AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

SG_HNDL_NULLABLE System_Transactions_HostCurrentTransactionCallback_Transaction__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Transactions_HostCurrentTransactionCallback_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), SG_HNDL_NULLABLE (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown));

TYP System_Transactions_IDtcTransaction_get_type_handle(void);

void System_Transactions_IDtcTransaction_void__Abort_0__3__IntPtr_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, intptr_t reason, int32_t retaining, int32_t async);

void System_Transactions_IDtcTransaction_void__Commit_0__3__i32_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t retaining, int32_t commitType, int32_t reserved);

void System_Transactions_IDtcTransaction_void__GetTransactionInfo_0__1__IntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, intptr_t transactionInformation);

SG_HNDL_NONNULL System_Transactions_IDtcTransaction_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_IEnlistmentNotification_get_type_handle(void);

void System_Transactions_IEnlistmentNotification_void__Commit_0__1__Enlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL enlistment);

void System_Transactions_IEnlistmentNotification_void__InDoubt_0__1__Enlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL enlistment);

void System_Transactions_IEnlistmentNotification_void__Prepare_0__1__PreparingEnlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL preparingEnlistment);

void System_Transactions_IEnlistmentNotification_void__Rollback_0__1__Enlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL enlistment);

SG_HNDL_NONNULL System_Transactions_IEnlistmentNotification_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_IPromotableSinglePhaseNotification_get_type_handle(void);

void System_Transactions_IPromotableSinglePhaseNotification_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_IPromotableSinglePhaseNotification_void__Rollback_0__1__SinglePhaseEnlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL singlePhaseEnlistment);

void System_Transactions_IPromotableSinglePhaseNotification_void__SinglePhaseCommit_0__1__SinglePhaseEnlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL singlePhaseEnlistment);

SG_HNDL_NONNULL System_Transactions_IPromotableSinglePhaseNotification_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_ISimpleTransactionSuperior_get_type_handle(void);

void System_Transactions_ISimpleTransactionSuperior_void__Rollback_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_ISimpleTransactionSuperior_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_ISinglePhaseNotification_get_type_handle(void);

void System_Transactions_ISinglePhaseNotification_void__SinglePhaseCommit_0__1__SinglePhaseEnlistment(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL singlePhaseEnlistment);

SG_HNDL_NONNULL System_Transactions_ISinglePhaseNotification_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_ITransactionPromoter_get_type_handle(void);

SG_HNDL_NULLABLE System_Transactions_ITransactionPromoter_u8Array__Promote_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_ITransactionPromoter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_IsolationLevel_get_type_handle(void);

int32_t System_Transactions_IsolationLevel_get_Serializable(void);

int32_t System_Transactions_IsolationLevel_get_RepeatableRead(void);

int32_t System_Transactions_IsolationLevel_get_ReadCommitted(void);

int32_t System_Transactions_IsolationLevel_get_ReadUncommitted(void);

int32_t System_Transactions_IsolationLevel_get_Snapshot(void);

int32_t System_Transactions_IsolationLevel_get_Chaos(void);

int32_t System_Transactions_IsolationLevel_get_Unspecified(void);

TYP System_Transactions_PreparingEnlistment_get_type_handle(void);

void System_Transactions_PreparingEnlistment_void__ForceRollback_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_PreparingEnlistment_void__ForceRollback_0__1__Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE e);

void System_Transactions_PreparingEnlistment_void__Prepared_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_PreparingEnlistment_u8Array__RecoveryInformation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_PreparingEnlistment_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_SinglePhaseEnlistment_get_type_handle(void);

void System_Transactions_SinglePhaseEnlistment_void__Aborted_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_SinglePhaseEnlistment_void__Aborted_0__1__Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE e);

void System_Transactions_SinglePhaseEnlistment_void__Committed_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_SinglePhaseEnlistment_void__InDoubt_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_SinglePhaseEnlistment_void__InDoubt_0__1__Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE e);

SG_HNDL_NONNULL System_Transactions_SinglePhaseEnlistment_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_SubordinateTransaction_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_SubordinateTransaction_ctor_0__2__IsolationLevel_ISimpleTransactionSuperior(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t isoLevel, SG_HNDL_NONNULL superior);

SG_HNDL_NONNULL System_Transactions_SubordinateTransaction_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_Transaction_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_Transaction_Transaction__Clone_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Transaction_DependentTransaction__DependentClone_0__1__DependentCloneOption(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t cloneOption);

void System_Transactions_Transaction_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Transaction_Enlistment__EnlistDurable_0__3__Guid_IEnlistmentNotification_EnlistmentOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL resourceManagerIdentifier, SG_HNDL_NONNULL enlistmentNotification, int32_t enlistmentOptions);

SG_HNDL_NONNULL System_Transactions_Transaction_Enlistment__EnlistDurable_0__3__Guid_ISinglePhaseNotification_EnlistmentOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL resourceManagerIdentifier, SG_HNDL_NONNULL singlePhaseNotification, int32_t enlistmentOptions);

int32_t System_Transactions_Transaction_bool__EnlistPromotableSinglePhase_0__1__IPromotableSinglePhaseNotification(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL promotableSinglePhaseNotification);

int32_t System_Transactions_Transaction_bool__EnlistPromotableSinglePhase_0__2__IPromotableSinglePhaseNotification_Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL promotableSinglePhaseNotification, SG_HNDL_NONNULL promoterType);

SG_HNDL_NONNULL System_Transactions_Transaction_Enlistment__EnlistVolatile_0__2__IEnlistmentNotification_EnlistmentOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL enlistmentNotification, int32_t enlistmentOptions);

SG_HNDL_NONNULL System_Transactions_Transaction_Enlistment__EnlistVolatile_0__2__ISinglePhaseNotification_EnlistmentOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL singlePhaseNotification, int32_t enlistmentOptions);

int32_t System_Transactions_Transaction_bool__Equals_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj);

int32_t System_Transactions_Transaction_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Transaction_u8Array__GetPromotedToken_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Transactions_Transaction_bool__op_Equality_0__2__Transaction_Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE x, SG_HNDL_NULLABLE y);

int32_t System_Transactions_Transaction_bool__op_Inequality_0__2__Transaction_Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE x, SG_HNDL_NULLABLE y);

SG_HNDL_NONNULL System_Transactions_Transaction_Enlistment__PromoteAndEnlistDurable_0__4__Guid_IPromotableSinglePhaseNotification_ISinglePhaseNotification_EnlistmentOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL resourceManagerIdentifier, SG_HNDL_NONNULL promotableNotification, SG_HNDL_NONNULL enlistmentNotification, int32_t enlistmentOptions);

void System_Transactions_Transaction_void__Rollback_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_Transaction_void__Rollback_0__1__Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE e);

void System_Transactions_Transaction_void__SetDistributedTransactionIdentifier_0__2__IPromotableSinglePhaseNotification_Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL promotableNotification, SG_HNDL_NONNULL distributedTransactionIdentifier);

SG_HNDL_NULLABLE System_Transactions_Transaction_Transaction__get_Current_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Transactions_Transaction_void__set_Current_0__1__Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

int32_t System_Transactions_Transaction_IsolationLevel__get_IsolationLevel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Transaction_Guid__get_PromoterType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_Transaction_TransactionInformation__get_TransactionInformation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_Transaction_void__add_TransactionCompleted_0__1__TransactionCompletedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

void System_Transactions_Transaction_void__remove_TransactionCompleted_0__1__TransactionCompletedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Transactions_Transaction_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionAbortedException_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionAbortedException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionAbortedException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Transactions_TransactionAbortedException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Transactions_TransactionAbortedException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionCompletedEventHandler_get_type_handle(void);

void System_Transactions_TransactionCompletedEventHandler_void__Invoke_0__2__Object_TransactionEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_Transactions_TransactionCompletedEventHandler_IAsyncResult__BeginInvoke_0__4__Object_TransactionEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_Transactions_TransactionCompletedEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Transactions_TransactionCompletedEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));

TYP System_Transactions_TransactionEventArgs_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionEventArgs_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Transactions_TransactionEventArgs_Transaction__get_Transaction_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_TransactionEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionException_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Transactions_TransactionException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Transactions_TransactionException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionInDoubtException_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionInDoubtException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionInDoubtException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Transactions_TransactionInDoubtException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Transactions_TransactionInDoubtException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionInformation_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionInformation_DateTime__get_CreationTime_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_TransactionInformation_Guid__get_DistributedIdentifier_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_TransactionInformation_String__get_LocalIdentifier_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Transactions_TransactionInformation_TransactionStatus__get_Status_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_TransactionInformation_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_get_PromoterTypeDtc(void);

void System_Transactions_TransactionInterop_set_PromoterTypeDtc(SG_HNDL_NONNULL __v);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_IDtcTransaction__GetDtcTransaction_0__1__Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transaction);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_u8Array__GetExportCookie_0__2__Transaction_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transaction, SG_HNDL_NONNULL whereabouts);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_Transaction__GetTransactionFromDtcTransaction_0__1__IDtcTransaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionNative);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_Transaction__GetTransactionFromExportCookie_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL cookie);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_Transaction__GetTransactionFromTransmitterPropagationToken_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL propagationToken);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_u8Array__GetTransmitterPropagationToken_0__1__Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transaction);

SG_HNDL_NONNULL System_Transactions_TransactionInterop_u8Array__GetWhereabouts_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Transactions_TransactionManager_void__RecoveryComplete_0__1__Guid(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL resourceManagerIdentifier);

SG_HNDL_NONNULL System_Transactions_TransactionManager_Enlistment__Reenlist_0__3__Guid_u8Array_IEnlistmentNotification(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL resourceManagerIdentifier, SG_HNDL_NONNULL recoveryInformation, SG_HNDL_NONNULL enlistmentNotification);

SG_HNDL_NONNULL System_Transactions_TransactionManager_TimeSpan__get_DefaultTimeout_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NULLABLE System_Transactions_TransactionManager_HostCurrentTransactionCallback__get_HostCurrentCallback_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Transactions_TransactionManager_void__set_HostCurrentCallback_0__1__HostCurrentTransactionCallback(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Transactions_TransactionManager_TimeSpan__get_MaximumTimeout_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Transactions_TransactionManager_void__add_DistributedTransactionStarted_0__1__TransactionStartedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Transactions_TransactionManager_void__remove_DistributedTransactionStarted_0__1__TransactionStartedEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

TYP System_Transactions_TransactionManagerCommunicationException_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionManagerCommunicationException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionManagerCommunicationException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Transactions_TransactionManagerCommunicationException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Transactions_TransactionManagerCommunicationException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionOptions_get_type_handle(void);

int32_t System_Transactions_TransactionOptions_bool__Equals_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj);

int32_t System_Transactions_TransactionOptions_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Transactions_TransactionOptions_bool__op_Equality_0__2__TransactionOptions_TransactionOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL x, SG_HNDL_NONNULL y);

int32_t System_Transactions_TransactionOptions_bool__op_Inequality_0__2__TransactionOptions_TransactionOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL x, SG_HNDL_NONNULL y);

int32_t System_Transactions_TransactionOptions_IsolationLevel__get_IsolationLevel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_TransactionOptions_void__set_IsolationLevel_0__1__IsolationLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Transactions_TransactionOptions_TimeSpan__get_Timeout_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_TransactionOptions_void__set_Timeout_0__1__TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Transactions_TransactionOptions_implicit_ctor(void);

TYP System_Transactions_TransactionPromotionException_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionPromotionException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionPromotionException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Transactions_TransactionPromotionException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Transactions_TransactionPromotionException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionScope_get_type_handle(void);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__1__Transaction(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionToUse);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__2__Transaction_TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionToUse, SG_HNDL_NONNULL scopeTimeout);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__3__Transaction_TimeSpan_EnterpriseServicesInteropOption(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionToUse, SG_HNDL_NONNULL scopeTimeout, int32_t interopOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__3__Transaction_TimeSpan_TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionToUse, SG_HNDL_NONNULL scopeTimeout, int32_t asyncFlowOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__2__Transaction_TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL transactionToUse, int32_t asyncFlowOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__1__TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t asyncFlowOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__1__TransactionScopeOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__2__TransactionScopeOption_TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, SG_HNDL_NONNULL scopeTimeout);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__3__TransactionScopeOption_TimeSpan_TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, SG_HNDL_NONNULL scopeTimeout, int32_t asyncFlowOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__2__TransactionScopeOption_TransactionOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, SG_HNDL_NONNULL transactionOptions);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__3__TransactionScopeOption_TransactionOptions_EnterpriseServicesInteropOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, SG_HNDL_NONNULL transactionOptions, int32_t interopOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__3__TransactionScopeOption_TransactionOptions_TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, SG_HNDL_NONNULL transactionOptions, int32_t asyncFlowOption);

SG_HNDL_NONNULL System_Transactions_TransactionScope_ctor_0__2__TransactionScopeOption_TransactionScopeAsyncFlowOption(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scopeOption, int32_t asyncFlowOption);

void System_Transactions_TransactionScope_void__Complete_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Transactions_TransactionScope_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Transactions_TransactionScope_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Transactions_TransactionScopeAsyncFlowOption_get_type_handle(void);

int32_t System_Transactions_TransactionScopeAsyncFlowOption_get_Suppress(void);

int32_t System_Transactions_TransactionScopeAsyncFlowOption_get_Enabled(void);

TYP System_Transactions_TransactionScopeOption_get_type_handle(void);

int32_t System_Transactions_TransactionScopeOption_get_Required(void);

int32_t System_Transactions_TransactionScopeOption_get_RequiresNew(void);

int32_t System_Transactions_TransactionScopeOption_get_Suppress(void);

TYP System_Transactions_TransactionStartedEventHandler_get_type_handle(void);

void System_Transactions_TransactionStartedEventHandler_void__Invoke_0__2__Object_TransactionEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_Transactions_TransactionStartedEventHandler_IAsyncResult__BeginInvoke_0__4__Object_TransactionEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_Transactions_TransactionStartedEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_Transactions_TransactionStartedEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, const void* _Nullable __pdata, void (* _Nullable __deinit)(const void* _Nullable __pdata), void (* _Nonnull  __cb)(const void* _Nullable __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e));

TYP System_Transactions_TransactionStatus_get_type_handle(void);

int32_t System_Transactions_TransactionStatus_get_Active(void);

int32_t System_Transactions_TransactionStatus_get_Committed(void);

int32_t System_Transactions_TransactionStatus_get_Aborted(void);

int32_t System_Transactions_TransactionStatus_get_InDoubt(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Transactions_Local
