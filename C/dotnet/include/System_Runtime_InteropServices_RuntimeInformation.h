// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Runtime_InteropServices_RuntimeInformation
#define INCLUDE_System_Runtime_InteropServices_RuntimeInformation

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Runtime_InteropServices_Architecture_get_type_handle(void);

int32_t System_Runtime_InteropServices_Architecture_get_X86(void);

int32_t System_Runtime_InteropServices_Architecture_get_X64(void);

int32_t System_Runtime_InteropServices_Architecture_get_Arm(void);

int32_t System_Runtime_InteropServices_Architecture_get_Arm64(void);

int32_t System_Runtime_InteropServices_Architecture_get_Wasm(void);

int32_t System_Runtime_InteropServices_Architecture_get_S390x(void);

TYP System_Runtime_InteropServices_OSPlatform_get_type_handle(void);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_OSPlatform__Create_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL osPlatform);

int32_t System_Runtime_InteropServices_OSPlatform_bool__Equals_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE obj);

int32_t System_Runtime_InteropServices_OSPlatform_bool__Equals_0__1__OSPlatform(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL other);

int32_t System_Runtime_InteropServices_OSPlatform_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Runtime_InteropServices_OSPlatform_bool__op_Equality_0__2__OSPlatform_OSPlatform(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL left, SG_HNDL_NONNULL right);

int32_t System_Runtime_InteropServices_OSPlatform_bool__op_Inequality_0__2__OSPlatform_OSPlatform(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL left, SG_HNDL_NONNULL right);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_String__ToString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_OSPlatform__get_FreeBSD_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_OSPlatform__get_Linux_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_OSPlatform__get_OSX_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_OSPlatform__get_Windows_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_OSPlatform_implicit_ctor(void);

int32_t System_Runtime_InteropServices_RuntimeInformation_bool__IsOSPlatform_0__1__OSPlatform(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL osPlatform);

SG_HNDL_NONNULL System_Runtime_InteropServices_RuntimeInformation_String__get_FrameworkDescription_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Runtime_InteropServices_RuntimeInformation_Architecture__get_OSArchitecture_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_RuntimeInformation_String__get_OSDescription_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Runtime_InteropServices_RuntimeInformation_Architecture__get_ProcessArchitecture_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Runtime_InteropServices_RuntimeInformation_String__get_RuntimeIdentifier_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Runtime_InteropServices_RuntimeInformation

