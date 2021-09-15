// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Security_Claims
#define INCLUDE_System_Security_Claims

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Security_Claims_Claim_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__1__BinaryReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL reader);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__2__BinaryReader_ClaimsIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL reader, SG_HNDL_NULLABLE subject);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__3__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value, SG_HNDL_NULLABLE valueType);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__4__String_String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value, SG_HNDL_NULLABLE valueType, SG_HNDL_NULLABLE issuer);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__5__String_String_String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value, SG_HNDL_NULLABLE valueType, SG_HNDL_NULLABLE issuer, SG_HNDL_NULLABLE originalIssuer);

SG_HNDL_NONNULL System_Security_Claims_Claim_ctor_0__6__String_String_String_String_String_ClaimsIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value, SG_HNDL_NULLABLE valueType, SG_HNDL_NULLABLE issuer, SG_HNDL_NULLABLE originalIssuer, SG_HNDL_NULLABLE subject);

SG_HNDL_NONNULL System_Security_Claims_Claim_Claim__Clone_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_Claim__Clone_0__1__ClaimsIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE identity);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__ToString_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Claims_Claim_void__WriteTo_0__1__BinaryWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__get_Issuer_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__get_OriginalIssuer_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_System_Collections_Generic_IDictionary_string_string___get_Properties_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Claims_Claim_ClaimsIdentity__get_Subject_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__get_Type_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__get_Value_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_String__get_ValueType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_Claim_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Actor(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Anonymous(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Authentication(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_AuthenticationInstant(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_AuthenticationMethod(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_AuthorizationDecision(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_CookiePath(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Country(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_DateOfBirth(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_DenyOnlyPrimaryGroupSid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_DenyOnlyPrimarySid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_DenyOnlySid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_DenyOnlyWindowsDeviceGroup(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Dns(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Dsa(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Email(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Expiration(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Expired(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Gender(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_GivenName(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_GroupSid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Hash(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_HomePhone(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_IsPersistent(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Locality(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_MobilePhone(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Name(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_NameIdentifier(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_OtherPhone(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_PostalCode(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_PrimaryGroupSid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_PrimarySid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Role(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Rsa(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_SerialNumber(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Sid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Spn(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_StateOrProvince(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_StreetAddress(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Surname(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_System(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Thumbprint(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Upn(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Uri(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_UserData(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Version(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_Webpage(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsAccountName(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsDeviceClaim(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsDeviceGroup(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsFqbnVersion(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsSubAuthority(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_WindowsUserClaim(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimTypes_get_X500DistinguishedName(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Base64Binary(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Base64Octet(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Boolean(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Date(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_DateTime(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_DaytimeDuration(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_DnsName(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Double(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_DsaKeyValue(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Email(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Fqbn(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_HexBinary(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Integer(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Integer32(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Integer64(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_KeyInfo(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Rfc822Name(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Rsa(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_RsaKeyValue(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Sid(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_String(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_Time(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_UInteger32(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_UInteger64(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_UpnName(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_X500Name(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimValueTypes_get_YearMonthDuration(void);

TYP System_Security_Claims_ClaimsIdentity_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_get_DefaultIssuer(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_get_DefaultNameClaimType(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_get_DefaultRoleClaimType(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__1__System_Collections_Generic_IEnumerable_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE claims);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__2__System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE claims, SG_HNDL_NULLABLE authenticationType);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__4__System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE claims, SG_HNDL_NULLABLE authenticationType, SG_HNDL_NULLABLE nameType, SG_HNDL_NULLABLE roleType);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__1__BinaryReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL reader);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__1__IIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE identity);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__2__IIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE identity, SG_HNDL_NULLABLE claims);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__5__IIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE identity, SG_HNDL_NULLABLE claims, SG_HNDL_NULLABLE authenticationType, SG_HNDL_NULLABLE nameType, SG_HNDL_NULLABLE roleType);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE authenticationType);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ctor_0__3__String_String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE authenticationType, SG_HNDL_NULLABLE nameType, SG_HNDL_NULLABLE roleType);

void System_Security_Claims_ClaimsIdentity_void__AddClaim_0__1__Claim(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL claim);

void System_Security_Claims_ClaimsIdentity_void__AddClaims_0__1__System_Collections_Generic_IEnumerable_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL claims);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_ClaimsIdentity__Clone_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___FindAll_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___FindAll_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_Claim__FindFirst_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_Claim__FindFirst_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type);

int32_t System_Security_Claims_ClaimsIdentity_bool__HasClaim_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

int32_t System_Security_Claims_ClaimsIdentity_bool__HasClaim_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value);

void System_Security_Claims_ClaimsIdentity_void__RemoveClaim_0__1__Claim(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE claim);

int32_t System_Security_Claims_ClaimsIdentity_bool__TryRemoveClaim_0__1__Claim(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE claim);

void System_Security_Claims_ClaimsIdentity_void__WriteTo_0__1__BinaryWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_ClaimsIdentity__get_Actor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Claims_ClaimsIdentity_void__set_Actor_0__1__ClaimsIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_String__get_AuthenticationType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_Object__get_BootstrapContext_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Claims_ClaimsIdentity_void__set_BootstrapContext_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___get_Claims_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Claims_ClaimsIdentity_bool__get_IsAuthenticated_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_String__get_Label_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Security_Claims_ClaimsIdentity_void__set_Label_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsIdentity_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_String__get_NameClaimType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_String__get_RoleClaimType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsIdentity_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Claims_ClaimsPrincipal_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ctor_0__1__System_Collections_Generic_IEnumerable_System_Security_Claims_ClaimsIdentity_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identities);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ctor_0__1__BinaryReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL reader);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ctor_0__1__IIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ctor_0__1__IPrincipal(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL principal);

void System_Security_Claims_ClaimsPrincipal_void__AddIdentities_0__1__System_Collections_Generic_IEnumerable_System_Security_Claims_ClaimsIdentity_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL identities);

void System_Security_Claims_ClaimsPrincipal_void__AddIdentity_0__1__ClaimsIdentity(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL identity);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_ClaimsPrincipal__Clone_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___FindAll_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___FindAll_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsPrincipal_Claim__FindFirst_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsPrincipal_Claim__FindFirst_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type);

int32_t System_Security_Claims_ClaimsPrincipal_bool__HasClaim_0__1__System_Predicate_System_Security_Claims_Claim_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL match);

int32_t System_Security_Claims_ClaimsPrincipal_bool__HasClaim_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL type, SG_HNDL_NONNULL value);

int32_t System_Security_Claims_ClaimsPrincipal_bool__IsInRole_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL role);

void System_Security_Claims_ClaimsPrincipal_void__WriteTo_0__1__BinaryWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL writer);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___get_Claims_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Func_System_Security_Claims_ClaimsPrincipal___get_ClaimsPrincipalSelector_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Claims_ClaimsPrincipal_void__set_ClaimsPrincipalSelector_0__1__System_Func_System_Security_Claims_ClaimsPrincipal_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsPrincipal_ClaimsPrincipal__get_Current_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Collections_Generic_IEnumerable_System_Security_Claims_ClaimsIdentity___get_Identities_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Security_Claims_ClaimsPrincipal_IIdentity__get_Identity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_System_Func_System_Collections_Generic_System_Collections_Generic_IEnumerable_System_Security_Claims_ClaimsIdentity__System_Security_Claims_ClaimsIdentity___get_PrimaryIdentitySelector_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Security_Claims_ClaimsPrincipal_void__set_PrimaryIdentitySelector_0__1__System_Func_System_Collections_Generic_System_Collections_Generic_IEnumerable_System_Security_Claims_ClaimsIdentity__System_Security_Claims_ClaimsIdentity_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Security_Claims_ClaimsPrincipal_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Principal_GenericIdentity_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_ctor_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL name, SG_HNDL_NONNULL type);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_ClaimsIdentity__Clone_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_String__get_AuthenticationType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_System_Collections_Generic_IEnumerable_System_Security_Claims_Claim___get_Claims_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Security_Principal_GenericIdentity_bool__get_IsAuthenticated_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_String__get_Name_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Principal_GenericIdentity_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Security_Principal_GenericPrincipal_get_type_handle(void);

SG_HNDL_NONNULL System_Security_Principal_GenericPrincipal_ctor_0__2__IIdentity_StringArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL identity, SG_HNDL_NULLABLE roles);

int32_t System_Security_Principal_GenericPrincipal_bool__IsInRole_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE role);

SG_HNDL_NONNULL System_Security_Principal_GenericPrincipal_IIdentity__get_Identity_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Security_Principal_GenericPrincipal_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Security_Claims
