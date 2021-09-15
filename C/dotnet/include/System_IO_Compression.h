// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_IO_Compression
#define INCLUDE_System_IO_Compression

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_IO_Compression_CompressionLevel_get_type_handle(void);

int32_t System_IO_Compression_CompressionLevel_get_Optimal(void);

int32_t System_IO_Compression_CompressionLevel_get_Fastest(void);

int32_t System_IO_Compression_CompressionLevel_get_NoCompression(void);

int32_t System_IO_Compression_CompressionLevel_get_SmallestSize(void);

TYP System_IO_Compression_CompressionMode_get_type_handle(void);

int32_t System_IO_Compression_CompressionMode_get_Decompress(void);

int32_t System_IO_Compression_CompressionMode_get_Compress(void);

TYP System_IO_Compression_DeflateStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ctor_0__2__Stream_CompressionLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ctor_0__3__Stream_CompressionLevel_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ctor_0__2__Stream_CompressionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ctor_0__3__Stream_CompressionMode_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

void System_IO_Compression_DeflateStream_void__CopyTo_0__2__Stream_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_Task__CopyToAsync_0__3__Stream_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ValueTask__DisposeAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_DeflateStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_DeflateStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_DeflateStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_DeflateStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

int32_t System_IO_Compression_DeflateStream_i32__Read_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_DeflateStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_DeflateStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_IO_Compression_DeflateStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_IO_Compression_DeflateStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

void System_IO_Compression_DeflateStream_void__Write_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_Stream__get_BaseStream_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_DeflateStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_DeflateStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_DeflateStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_DeflateStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_DeflateStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Compression_DeflateStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

SG_HNDL_NONNULL System_IO_Compression_DeflateStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Compression_GZipStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ctor_0__2__Stream_CompressionLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ctor_0__3__Stream_CompressionLevel_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ctor_0__2__Stream_CompressionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ctor_0__3__Stream_CompressionMode_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

void System_IO_Compression_GZipStream_void__CopyTo_0__2__Stream_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_Task__CopyToAsync_0__3__Stream_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ValueTask__DisposeAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_GZipStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_GZipStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_GZipStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_GZipStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

int32_t System_IO_Compression_GZipStream_i32__Read_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_GZipStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_GZipStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_IO_Compression_GZipStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_IO_Compression_GZipStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

void System_IO_Compression_GZipStream_void__Write_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_Stream__get_BaseStream_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_GZipStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_GZipStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_GZipStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_GZipStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_GZipStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Compression_GZipStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

SG_HNDL_NONNULL System_IO_Compression_GZipStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Compression_ZLibStream_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ctor_0__2__Stream_CompressionLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ctor_0__3__Stream_CompressionLevel_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t compressionLevel, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ctor_0__2__Stream_CompressionMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ctor_0__3__Stream_CompressionMode_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_IAsyncResult__BeginRead_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_IAsyncResult__BeginWrite_0__5__u8Array_i32_i32_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NULLABLE asyncCallback, SG_HNDL_NULLABLE asyncState);

void System_IO_Compression_ZLibStream_void__CopyTo_0__2__Stream_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_Task__CopyToAsync_0__3__Stream_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL destination, int32_t bufferSize, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ValueTask__DisposeAsync_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZLibStream_i32__EndRead_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_ZLibStream_void__EndWrite_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL asyncResult);

void System_IO_Compression_ZLibStream_void__Flush_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_Task__FlushAsync_0__1__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_ZLibStream_i32__Read_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

int32_t System_IO_Compression_ZLibStream_i32__Read_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_System_Threading_Tasks_Task_i32___ReadAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_System_Threading_Tasks_ValueTask_i32___ReadAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

int32_t System_IO_Compression_ZLibStream_i32__ReadByte_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_ZLibStream_i64__Seek_0__2__i64_SeekOrigin(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t offset, int32_t origin);

void System_IO_Compression_ZLibStream_void__SetLength_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

void System_IO_Compression_ZLibStream_void__Write_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

void System_IO_Compression_ZLibStream_void__Write_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __buffer_spanptr);

void System_IO_Compression_ZLibStream_void__WriteByte_0__1__u8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, uint8_t value);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_Task__WriteAsync_0__4__u8Array_i32_i32_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_ValueTask__WriteAsync_0__2__System_ReadOnlyMemory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_Stream__get_BaseStream_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZLibStream_bool__get_CanRead_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZLibStream_bool__get_CanSeek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZLibStream_bool__get_CanWrite_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_ZLibStream_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_ZLibStream_i64__get_Position_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Compression_ZLibStream_void__set_Position_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int64_t value);

SG_HNDL_NONNULL System_IO_Compression_ZLibStream_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Compression_ZipArchive_get_type_handle(void);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ctor_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ctor_0__2__Stream_ZipArchiveMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ctor_0__3__Stream_ZipArchiveMode_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode, int32_t leaveOpen);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ctor_0__4__Stream_ZipArchiveMode_bool_Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t mode, int32_t leaveOpen, SG_HNDL_NULLABLE entryNameEncoding);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ZipArchiveEntry__CreateEntry_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL entryName);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_ZipArchiveEntry__CreateEntry_0__2__String_CompressionLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL entryName, int32_t compressionLevel);

void System_IO_Compression_ZipArchive_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_IO_Compression_ZipArchive_ZipArchiveEntry__GetEntry_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL entryName);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_System_Collections_ObjectModel_ReadOnlyCollection_System_IO_Compression_ZipArchiveEntry___get_Entries_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZipArchive_ZipArchiveMode__get_Mode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchive_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Compression_ZipArchiveEntry_get_type_handle(void);

void System_IO_Compression_ZipArchiveEntry_void__Delete_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_Stream__Open_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_String__ToString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_ZipArchive__get_Archive_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int64_t System_IO_Compression_ZipArchiveEntry_i64__get_CompressedLength_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

uint32_t System_IO_Compression_ZipArchiveEntry_u32__get_Crc32_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_IO_Compression_ZipArchiveEntry_i32__get_ExternalAttributes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Compression_ZipArchiveEntry_void__set_ExternalAttributes_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_String__get_FullName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_DateTimeOffset__get_LastWriteTime_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_IO_Compression_ZipArchiveEntry_void__set_LastWriteTime_0__1__DateTimeOffset(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int64_t System_IO_Compression_ZipArchiveEntry_i64__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_IO_Compression_ZipArchiveEntry_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_IO_Compression_ZipArchiveMode_get_type_handle(void);

int32_t System_IO_Compression_ZipArchiveMode_get_Read(void);

int32_t System_IO_Compression_ZipArchiveMode_get_Create(void);

int32_t System_IO_Compression_ZipArchiveMode_get_Update(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_IO_Compression

