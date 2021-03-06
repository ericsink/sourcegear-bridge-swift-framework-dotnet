// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Security_Cryptography_Csp
#define INCLUDE_System_Security_Cryptography_Csp

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Security_Cryptography_AesCryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

void System_Security_Cryptography_AesCryptoServiceProvider_void__GenerateIV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__GenerateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_AesCryptoServiceProvider_i32__get_BlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_BlockSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_AesCryptoServiceProvider_i32__get_FeedbackSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_FeedbackSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_u8Array__get_IV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_IV_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_u8Array__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_Key_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Security_Cryptography_AesCryptoServiceProvider_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_KeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_KeySizesArray__get_LegalBlockSizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_AesCryptoServiceProvider_CipherMode__get_Mode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_Mode_0__1__CipherMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_AesCryptoServiceProvider_PaddingMode__get_Padding_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_AesCryptoServiceProvider_void__set_Padding_0__1__PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_AesCryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_CspKeyContainerInfo_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_CspKeyContainerInfo_ctor_0__1__CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL parameters);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_Accessible_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_Exportable_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_HardwareDevice_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_CspKeyContainerInfo_String__get_KeyContainerName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_KeyNumber__get_KeyNumber_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_MachineKeyStore_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_Protected_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_CspKeyContainerInfo_String__get_ProviderName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_i32__get_ProviderType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_RandomlyGenerated_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_CspKeyContainerInfo_bool__get_Removable_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_CspKeyContainerInfo_String__get_UniqueKeyContainerName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_CspKeyContainerInfo_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_CspParameters_get_type_handle(void);

SG_HNDL_NULLABLE System_Security_Cryptography_CspParameters_get_KeyContainerName(SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_set_KeyContainerName(SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE __v);

int32_t System_Security_Cryptography_CspParameters_get_KeyNumber(SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_set_KeyNumber(SG_HNDL_NONNULL __self_h, int32_t __v);

SG_HNDL_NULLABLE System_Security_Cryptography_CspParameters_get_ProviderName(SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_set_ProviderName(SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE __v);

int32_t System_Security_Cryptography_CspParameters_get_ProviderType(SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_set_ProviderType(SG_HNDL_NONNULL __self_h, int32_t __v);

SG_HNDL_NONNULL System_Security_Cryptography_CspParameters_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_CspParameters_ctor_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwTypeIn);

SG_HNDL_NONNULL System_Security_Cryptography_CspParameters_ctor_0__2__i32_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwTypeIn, SG_HNDL_NULLABLE strProviderNameIn);

SG_HNDL_NONNULL System_Security_Cryptography_CspParameters_ctor_0__3__i32_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwTypeIn, SG_HNDL_NULLABLE strProviderNameIn, SG_HNDL_NULLABLE strContainerNameIn);

int32_t System_Security_Cryptography_CspParameters_CspProviderFlags__get_Flags_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_void__set_Flags_0__1__CspProviderFlags(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Security_Cryptography_CspParameters_SecureString__get_KeyPassword_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_void__set_KeyPassword_0__1__SecureString(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

intptr_t System_Security_Cryptography_CspParameters_IntPtr__get_ParentWindowHandle_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_CspParameters_void__set_ParentWindowHandle_0__1__IntPtr(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, intptr_t value);

SG_HNDL_NONNULL System_Security_Cryptography_CspParameters_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_CspProviderFlags_get_type_handle(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_NoFlags(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseMachineKeyStore(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseDefaultKeyContainer(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseNonExportableKey(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseExistingKey(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseArchivableKey(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_UseUserProtectedKey(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_NoPrompt(void);

int32_t System_Security_Cryptography_CspProviderFlags_get_CreateEphemeralKey(void);

TYP System_Security_Cryptography_DESCryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

void System_Security_Cryptography_DESCryptoServiceProvider_void__GenerateIV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_DESCryptoServiceProvider_void__GenerateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_DESCryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_DSACryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_ctor_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwKeySize);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_ctor_0__2__i32_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwKeySize, SG_HNDL_NULLABLE parameters);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_ctor_0__1__CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE parameters);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__CreateSignature_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__ExportCspBlob_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_DSAParameters__ExportParameters_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

void System_Security_Cryptography_DSACryptoServiceProvider_void__ImportCspBlob_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL keyBlob);

void System_Security_Cryptography_DSACryptoServiceProvider_void__ImportParameters_0__1__DSAParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL parameters);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__SignData_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__SignData_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__SignData_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputStream);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_u8Array__SignHash_0__2__u8Array_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash, SG_HNDL_NULLABLE str);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__VerifyData_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbData, SG_HNDL_NONNULL rgbSignature);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__VerifyHash_0__3__u8Array_String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash, SG_HNDL_NULLABLE str, SG_HNDL_NONNULL rgbSignature);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__VerifySignature_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash, SG_HNDL_NONNULL rgbSignature);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_CspKeyContainerInfo__get_CspKeyContainerInfo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_DSACryptoServiceProvider_String__get_KeyExchangeAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__get_PersistKeyInCsp_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_DSACryptoServiceProvider_void__set_PersistKeyInCsp_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__get_PublicOnly_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_String__get_SignatureAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_DSACryptoServiceProvider_bool__get_UseMachineKeyStore_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_DSACryptoServiceProvider_void__set_UseMachineKeyStore_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_DSACryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_ICspAsymmetricAlgorithm_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_ICspAsymmetricAlgorithm_u8Array__ExportCspBlob_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

void System_Security_Cryptography_ICspAsymmetricAlgorithm_void__ImportCspBlob_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rawData);

SG_HNDL_NONNULL System_Security_Cryptography_ICspAsymmetricAlgorithm_CspKeyContainerInfo__get_CspKeyContainerInfo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_ICspAsymmetricAlgorithm_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_KeyNumber_get_type_handle(void);

int32_t System_Security_Cryptography_KeyNumber_get_Exchange(void);

int32_t System_Security_Cryptography_KeyNumber_get_Signature(void);

TYP System_Security_Cryptography_MD5CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_MD5CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_MD5CryptoServiceProvider_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_MD5CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_PasswordDeriveBytes_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL password, SG_HNDL_NULLABLE salt);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__3__u8Array_u8Array_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL password, SG_HNDL_NULLABLE salt, SG_HNDL_NULLABLE cspParams);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__4__u8Array_u8Array_String_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL password, SG_HNDL_NULLABLE salt, SG_HNDL_NONNULL hashName, int32_t iterations);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__5__u8Array_u8Array_String_i32_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL password, SG_HNDL_NULLABLE salt, SG_HNDL_NONNULL hashName, int32_t iterations, SG_HNDL_NULLABLE cspParams);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__2__String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL strPassword, SG_HNDL_NULLABLE rgbSalt);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__3__String_u8Array_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL strPassword, SG_HNDL_NULLABLE rgbSalt, SG_HNDL_NULLABLE cspParams);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__4__String_u8Array_String_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL strPassword, SG_HNDL_NULLABLE rgbSalt, SG_HNDL_NONNULL strHashName, int32_t iterations);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_ctor_0__5__String_u8Array_String_i32_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL strPassword, SG_HNDL_NULLABLE rgbSalt, SG_HNDL_NONNULL strHashName, int32_t iterations, SG_HNDL_NULLABLE cspParams);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_u8Array__CryptDeriveKey_0__4__String_String_i32_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE algname, SG_HNDL_NULLABLE alghashname, int32_t keySize, SG_HNDL_NONNULL rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_u8Array__GetBytes_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t cb);

void System_Security_Cryptography_PasswordDeriveBytes_void__Reset_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_String__get_HashName_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_PasswordDeriveBytes_void__set_HashName_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Security_Cryptography_PasswordDeriveBytes_i32__get_IterationCount_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_PasswordDeriveBytes_void__set_IterationCount_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Security_Cryptography_PasswordDeriveBytes_u8Array__get_Salt_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_PasswordDeriveBytes_void__set_Salt_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Security_Cryptography_PasswordDeriveBytes_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_RC2CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_RC2CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_RC2CryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_RC2CryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

void System_Security_Cryptography_RC2CryptoServiceProvider_void__GenerateIV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_RC2CryptoServiceProvider_void__GenerateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_RC2CryptoServiceProvider_i32__get_EffectiveKeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_RC2CryptoServiceProvider_void__set_EffectiveKeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_RC2CryptoServiceProvider_bool__get_UseSalt_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_RC2CryptoServiceProvider_void__set_UseSalt_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_RC2CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_RNGCryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_RNGCryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_RNGCryptoServiceProvider_ctor_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL rgb);

SG_HNDL_NONNULL System_Security_Cryptography_RNGCryptoServiceProvider_ctor_0__1__CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE cspParams);

SG_HNDL_NONNULL System_Security_Cryptography_RNGCryptoServiceProvider_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL str);

void System_Security_Cryptography_RNGCryptoServiceProvider_void__GetBytes_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL data);

void System_Security_Cryptography_RNGCryptoServiceProvider_void__GetBytes_0__3__u8Array_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL data, int32_t offset, int32_t count);

void System_Security_Cryptography_RNGCryptoServiceProvider_void__GetBytes_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __data_spanptr);

void System_Security_Cryptography_RNGCryptoServiceProvider_void__GetNonZeroBytes_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL data);

void System_Security_Cryptography_RNGCryptoServiceProvider_void__GetNonZeroBytes_0__1__spanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __data_spanptr);

SG_HNDL_NONNULL System_Security_Cryptography_RNGCryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_RSACryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_ctor_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwKeySize);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_ctor_0__2__i32_CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t dwKeySize, SG_HNDL_NULLABLE parameters);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_ctor_0__1__CspParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE parameters);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__Decrypt_0__2__u8Array_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgb, int32_t fOAEP);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__Decrypt_0__2__u8Array_RSAEncryptionPadding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL data, SG_HNDL_NONNULL padding);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__DecryptValue_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgb);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__Encrypt_0__2__u8Array_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgb, int32_t fOAEP);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__Encrypt_0__2__u8Array_RSAEncryptionPadding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL data, SG_HNDL_NONNULL padding);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__EncryptValue_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgb);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__ExportCspBlob_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_RSAParameters__ExportParameters_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t includePrivateParameters);

void System_Security_Cryptography_RSACryptoServiceProvider_void__ImportCspBlob_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL keyBlob);

void System_Security_Cryptography_RSACryptoServiceProvider_void__ImportParameters_0__1__RSAParameters(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL parameters);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__SignData_0__4__u8Array_i32_i32_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t offset, int32_t count, SG_HNDL_NONNULL halg);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__SignData_0__2__u8Array_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL halg);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__SignData_0__2__Stream_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL inputStream, SG_HNDL_NONNULL halg);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__SignHash_0__3__u8Array_HashAlgorithmName_RSASignaturePadding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL hash, SG_HNDL_NONNULL hashAlgorithm, SG_HNDL_NONNULL padding);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_u8Array__SignHash_0__2__u8Array_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash, SG_HNDL_NULLABLE str);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__VerifyData_0__3__u8Array_Object_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL halg, SG_HNDL_NONNULL signature);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__VerifyHash_0__4__u8Array_u8Array_HashAlgorithmName_RSASignaturePadding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL hash, SG_HNDL_NONNULL signature, SG_HNDL_NONNULL hashAlgorithm, SG_HNDL_NONNULL padding);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__VerifyHash_0__3__u8Array_String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbHash, SG_HNDL_NONNULL str, SG_HNDL_NONNULL rgbSignature);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_CspKeyContainerInfo__get_CspKeyContainerInfo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Cryptography_RSACryptoServiceProvider_String__get_KeyExchangeAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__get_PersistKeyInCsp_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_RSACryptoServiceProvider_void__set_PersistKeyInCsp_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__get_PublicOnly_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_String__get_SignatureAlgorithm_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_RSACryptoServiceProvider_bool__get_UseMachineKeyStore_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_RSACryptoServiceProvider_void__set_UseMachineKeyStore_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_RSACryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_SHA1CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_SHA1CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_SHA1CryptoServiceProvider_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SHA1CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_SHA256CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_SHA256CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_SHA256CryptoServiceProvider_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SHA256CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_SHA384CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_SHA384CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_SHA384CryptoServiceProvider_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SHA384CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_SHA512CryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_SHA512CryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Cryptography_SHA512CryptoServiceProvider_void__Initialize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_SHA512CryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Cryptography_TripleDESCryptoServiceProvider_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_ICryptoTransform__CreateDecryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_ICryptoTransform__CreateEncryptor_0__2__u8Array_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL rgbKey, SG_HNDL_NULLABLE rgbIV);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__GenerateIV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__GenerateKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_TripleDESCryptoServiceProvider_i32__get_BlockSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_BlockSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_TripleDESCryptoServiceProvider_i32__get_FeedbackSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_FeedbackSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_u8Array__get_IV_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_IV_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_u8Array__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_Key_0__1__u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Security_Cryptography_TripleDESCryptoServiceProvider_i32__get_KeySize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_KeySize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_KeySizesArray__get_LegalBlockSizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_KeySizesArray__get_LegalKeySizes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Cryptography_TripleDESCryptoServiceProvider_CipherMode__get_Mode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_Mode_0__1__CipherMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Security_Cryptography_TripleDESCryptoServiceProvider_PaddingMode__get_Padding_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Cryptography_TripleDESCryptoServiceProvider_void__set_Padding_0__1__PaddingMode(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Security_Cryptography_TripleDESCryptoServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Security_Cryptography_Csp

