// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_IO_IsolatedStorage
#define INCLUDE_System_IO_IsolatedStorage

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_IO_IsolatedStorage_INormalizeForIsolatedStorage_get_type_handle(void);

SG_HNDL_NONNULL System_IO_IsolatedStorage_INormalizeForIsolatedStorage_Object__Normalize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_INormalizeForIsolatedStorage_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_IsolatedStorage_IsolatedStorage_get_type_handle(void);

int32_t System_IO_IsolatedStorage_IsolatedStorage_bool__IncreaseQuotaTo_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t newQuotaSize);

void System_IO_IsolatedStorage_IsolatedStorage_void__Remove_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorage_Object__get_ApplicationIdentity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorage_Object__get_AssemblyIdentity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorage_i64__get_AvailableFreeSpace_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

uint64_t System_IO_IsolatedStorage_IsolatedStorage_u64__get_CurrentSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorage_Object__get_DomainIdentity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

uint64_t System_IO_IsolatedStorage_IsolatedStorage_u64__get_MaximumSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorage_i64__get_Quota_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorage_IsolatedStorageScope__get_Scope_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorage_i64__get_UsedSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorage_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_IsolatedStorage_IsolatedStorageException_get_type_handle(void);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE inner);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_IsolatedStorage_IsolatedStorageFile_get_type_handle(void);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__CopyFile_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sourceFileName, SG_HNDL_NONNULL destinationFileName);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__CopyFile_0__3__String_String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sourceFileName, SG_HNDL_NONNULL destinationFileName, int32_t overwrite);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__CreateDirectory_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL dir);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFileStream__CreateFile_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__DeleteDirectory_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL dir);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__DeleteFile_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL file);

int32_t System_IO_IsolatedStorage_IsolatedStorageFile_bool__DirectoryExists_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFile_bool__FileExists_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_DateTimeOffset__GetCreationTime_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_StringArray__GetDirectoryNames_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_StringArray__GetDirectoryNames_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL searchPattern);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IEnumerator__GetEnumerator_0__1__IsolatedStorageScope(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_StringArray__GetFileNames_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_StringArray__GetFileNames_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL searchPattern);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_DateTimeOffset__GetLastAccessTime_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_DateTimeOffset__GetLastWriteTime_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetMachineStoreForApplication_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetMachineStoreForAssembly_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetMachineStoreForDomain_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetStore_0__2__IsolatedStorageScope_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope, SG_HNDL_NULLABLE applicationIdentity);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetStore_0__3__IsolatedStorageScope_Object_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope, SG_HNDL_NULLABLE domainIdentity, SG_HNDL_NULLABLE assemblyIdentity);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetStore_0__2__IsolatedStorageScope_Type(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope, SG_HNDL_NULLABLE applicationEvidenceType);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetStore_0__3__IsolatedStorageScope_Type_Type(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope, SG_HNDL_NULLABLE domainEvidenceType, SG_HNDL_NULLABLE assemblyEvidenceType);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetUserStoreForApplication_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetUserStoreForAssembly_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetUserStoreForDomain_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFile__GetUserStoreForSite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_IO_IsolatedStorage_IsolatedStorageFile_bool__IncreaseQuotaTo_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t newQuotaSize);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__MoveDirectory_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sourceDirectoryName, SG_HNDL_NONNULL destinationDirectoryName);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__MoveFile_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL sourceFileName, SG_HNDL_NONNULL destinationFileName);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFileStream__OpenFile_0__2__String_FileMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path, int32_t mode);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFileStream__OpenFile_0__3__String_FileMode_FileAccess(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path, int32_t mode, int32_t access);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_IsolatedStorageFileStream__OpenFile_0__4__String_FileMode_FileAccess_FileShare(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL path, int32_t mode, int32_t access, int32_t share);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__Remove_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_IsolatedStorage_IsolatedStorageFile_void__Remove_0__1__IsolatedStorageScope(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t scope);

int64_t System_IO_IsolatedStorage_IsolatedStorageFile_i64__get_AvailableFreeSpace_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

uint64_t System_IO_IsolatedStorage_IsolatedStorageFile_u64__get_CurrentSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFile_bool__get_IsEnabled_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

uint64_t System_IO_IsolatedStorage_IsolatedStorageFile_u64__get_MaximumSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorageFile_i64__get_Quota_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorageFile_i64__get_UsedSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFile_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_IsolatedStorage_IsolatedStorageFileStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__2__String_FileMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__3__String_FileMode_FileAccess(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__4__String_FileMode_FileAccess_FileShare(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access, int32_t share);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__5__String_FileMode_FileAccess_FileShare_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__6__String_FileMode_FileAccess_FileShare_i32_IsolatedStorageFile(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, SG_HNDL_NULLABLE isf);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__5__String_FileMode_FileAccess_FileShare_IsolatedStorageFile(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access, int32_t share, SG_HNDL_NULLABLE isf);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__4__String_FileMode_FileAccess_IsolatedStorageFile(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, int32_t access, SG_HNDL_NULLABLE isf);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ctor_0__3__String_FileMode_IsolatedStorageFile(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL path, int32_t mode, SG_HNDL_NULLABLE isf);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL array, int32_t offset, int32_t numBytes, SG_HNDL_NULLABLE userCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL array, int32_t offset, int32_t numBytes, SG_HNDL_NULLABLE userCallback, SG_HNDL_NULLABLE stateObject);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ValueTask__DisposeAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Flush_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t flushToDisk);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Lock_0__2__i64_i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t position, int64_t length);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i32__Read_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Unlock_0__2__i64_i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t position, int64_t length);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__Write_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__WriteByte_0__1__u8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, uint8_t value);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

intptr_t System_IO_IsolatedStorage_IsolatedStorageFileStream_IntPtr__get_Handle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_IsolatedStorage_IsolatedStorageFileStream_bool__get_IsAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_IsolatedStorage_IsolatedStorageFileStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_IsolatedStorage_IsolatedStorageFileStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_SafeFileHandle__get_SafeFileHandle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_IsolatedStorage_IsolatedStorageFileStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_IsolatedStorage_IsolatedStorageScope_get_type_handle(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_None(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_User(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_Domain(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_Assembly(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_Roaming(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_Machine(void);

int32_t System_IO_IsolatedStorage_IsolatedStorageScope_get_Application(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_IO_IsolatedStorage

