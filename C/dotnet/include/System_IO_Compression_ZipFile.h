// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_IO_Compression_ZipFile
#define INCLUDE_System_IO_Compression_ZipFile

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

void System_IO_Compression_ZipFile_void__CreateFromDirectory_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceDirectoryName, SG_HNDL_NONNULL destinationArchiveFileName);

void System_IO_Compression_ZipFile_void__CreateFromDirectory_0__4__String_String_CompressionLevel_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceDirectoryName, SG_HNDL_NONNULL destinationArchiveFileName, int32_t compressionLevel, int32_t includeBaseDirectory);

void System_IO_Compression_ZipFile_void__CreateFromDirectory_0__5__String_String_CompressionLevel_bool_Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceDirectoryName, SG_HNDL_NONNULL destinationArchiveFileName, int32_t compressionLevel, int32_t includeBaseDirectory, SG_HNDL_NULLABLE entryNameEncoding);

void System_IO_Compression_ZipFile_void__ExtractToDirectory_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceArchiveFileName, SG_HNDL_NONNULL destinationDirectoryName);

void System_IO_Compression_ZipFile_void__ExtractToDirectory_0__3__String_String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceArchiveFileName, SG_HNDL_NONNULL destinationDirectoryName, int32_t overwriteFiles);

void System_IO_Compression_ZipFile_void__ExtractToDirectory_0__3__String_String_Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceArchiveFileName, SG_HNDL_NONNULL destinationDirectoryName, SG_HNDL_NULLABLE entryNameEncoding);

void System_IO_Compression_ZipFile_void__ExtractToDirectory_0__4__String_String_Encoding_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL sourceArchiveFileName, SG_HNDL_NONNULL destinationDirectoryName, SG_HNDL_NULLABLE entryNameEncoding, int32_t overwriteFiles);

SG_HNDL_NONNULL System_IO_Compression_ZipFile_ZipArchive__Open_0__2__String_ZipArchiveMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL archiveFileName, int32_t mode);

SG_HNDL_NONNULL System_IO_Compression_ZipFile_ZipArchive__Open_0__3__String_ZipArchiveMode_Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL archiveFileName, int32_t mode, SG_HNDL_NULLABLE entryNameEncoding);

SG_HNDL_NONNULL System_IO_Compression_ZipFile_ZipArchive__OpenRead_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL archiveFileName);

SG_HNDL_NONNULL System_IO_Compression_ZipFileExtensions_ZipArchiveEntry__CreateEntryFromFile_0__3__ZipArchive_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL destination, SG_HNDL_NONNULL sourceFileName, SG_HNDL_NONNULL entryName);

SG_HNDL_NONNULL System_IO_Compression_ZipFileExtensions_ZipArchiveEntry__CreateEntryFromFile_0__4__ZipArchive_String_String_CompressionLevel(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL destination, SG_HNDL_NONNULL sourceFileName, SG_HNDL_NONNULL entryName, int32_t compressionLevel);

void System_IO_Compression_ZipFileExtensions_void__ExtractToDirectory_0__2__ZipArchive_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL source, SG_HNDL_NONNULL destinationDirectoryName);

void System_IO_Compression_ZipFileExtensions_void__ExtractToDirectory_0__3__ZipArchive_String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL source, SG_HNDL_NONNULL destinationDirectoryName, int32_t overwriteFiles);

void System_IO_Compression_ZipFileExtensions_void__ExtractToFile_0__2__ZipArchiveEntry_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL source, SG_HNDL_NONNULL destinationFileName);

void System_IO_Compression_ZipFileExtensions_void__ExtractToFile_0__3__ZipArchiveEntry_String_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL source, SG_HNDL_NONNULL destinationFileName, int32_t overwrite);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_IO_Compression_ZipFile
