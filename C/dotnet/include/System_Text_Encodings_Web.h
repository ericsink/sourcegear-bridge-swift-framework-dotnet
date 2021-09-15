// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Text_Encodings_Web
#define INCLUDE_System_Text_Encodings_Web

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Text_Encodings_Web_HtmlEncoder_get_type_handle(void);

SG_HNDL_NONNULL System_Text_Encodings_Web_HtmlEncoder_HtmlEncoder__Create_0__1__TextEncoderSettings(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL settings);

SG_HNDL_NONNULL System_Text_Encodings_Web_HtmlEncoder_HtmlEncoder__Create_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL allowedRanges);

SG_HNDL_NONNULL System_Text_Encodings_Web_HtmlEncoder_HtmlEncoder__get_Default_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Encodings_Web_HtmlEncoder_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Text_Encodings_Web_JavaScriptEncoder_get_type_handle(void);

SG_HNDL_NONNULL System_Text_Encodings_Web_JavaScriptEncoder_JavaScriptEncoder__Create_0__1__TextEncoderSettings(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL settings);

SG_HNDL_NONNULL System_Text_Encodings_Web_JavaScriptEncoder_JavaScriptEncoder__Create_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL allowedRanges);

SG_HNDL_NONNULL System_Text_Encodings_Web_JavaScriptEncoder_JavaScriptEncoder__get_Default_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Encodings_Web_JavaScriptEncoder_JavaScriptEncoder__get_UnsafeRelaxedJsonEscaping_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Encodings_Web_JavaScriptEncoder_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Text_Encodings_Web_TextEncoder_get_type_handle(void);

void System_Text_Encodings_Web_TextEncoder_void__Encode_0__4__TextWriter_CharArray_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL output, SG_HNDL_NONNULL value, int32_t startIndex, int32_t characterCount);

void System_Text_Encodings_Web_TextEncoder_void__Encode_0__2__TextWriter_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL output, SG_HNDL_NONNULL value);

void System_Text_Encodings_Web_TextEncoder_void__Encode_0__4__TextWriter_String_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL output, SG_HNDL_NONNULL value, int32_t startIndex, int32_t characterCount);

int32_t System_Text_Encodings_Web_TextEncoder_OperationStatus__Encode_0__5__rospanChar_spanChar_outi32_outi32_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __source_spanptr, const void* _Nonnull __destination_spanptr, int32_t* _Nonnull __charsConsumed_out_ptr, int32_t* _Nonnull __charsWritten_out_ptr, int32_t isFinalBlock);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoder_String__Encode_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

int32_t System_Text_Encodings_Web_TextEncoder_OperationStatus__EncodeUtf8_0__5__rospanu8_spanu8_outi32_outi32_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __utf8Source_spanptr, const void* _Nonnull __utf8Destination_spanptr, int32_t* _Nonnull __bytesConsumed_out_ptr, int32_t* _Nonnull __bytesWritten_out_ptr, int32_t isFinalBlock);

int32_t System_Text_Encodings_Web_TextEncoder_i32__FindFirstCharacterToEncode_0__2__pchar_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int16_t* _Nullable text, int32_t textLength);

int32_t System_Text_Encodings_Web_TextEncoder_i32__FindFirstCharacterToEncodeUtf8_0__1__rospanu8(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, const void* _Nonnull __utf8Text_spanptr);

int32_t System_Text_Encodings_Web_TextEncoder_bool__TryEncodeUnicodeScalar_0__4__i32_pchar_i32_outi32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t unicodeScalar, int16_t* _Nullable buffer, int32_t bufferLength, int32_t* _Nonnull __numberOfCharactersWritten_out_ptr);

int32_t System_Text_Encodings_Web_TextEncoder_bool__WillEncode_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t unicodeScalar);

int32_t System_Text_Encodings_Web_TextEncoder_i32__get_MaxOutputCharactersPerInputCharacter_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoder_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Text_Encodings_Web_TextEncoderSettings_get_type_handle(void);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoderSettings_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoderSettings_ctor_0__1__TextEncoderSettings(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL other);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoderSettings_ctor_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL allowedRanges);

void System_Text_Encodings_Web_TextEncoderSettings_void__AllowCharacter_0__1__Char(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int16_t character);

void System_Text_Encodings_Web_TextEncoderSettings_void__AllowCharacters_0__1__CharArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL characters);

void System_Text_Encodings_Web_TextEncoderSettings_void__AllowCodePoints_0__1__System_Collections_Generic_IEnumerable_i32_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL codePoints);

void System_Text_Encodings_Web_TextEncoderSettings_void__AllowRange_0__1__UnicodeRange(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL range);

void System_Text_Encodings_Web_TextEncoderSettings_void__AllowRanges_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL ranges);

void System_Text_Encodings_Web_TextEncoderSettings_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Text_Encodings_Web_TextEncoderSettings_void__ForbidCharacter_0__1__Char(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int16_t character);

void System_Text_Encodings_Web_TextEncoderSettings_void__ForbidCharacters_0__1__CharArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL characters);

void System_Text_Encodings_Web_TextEncoderSettings_void__ForbidRange_0__1__UnicodeRange(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL range);

void System_Text_Encodings_Web_TextEncoderSettings_void__ForbidRanges_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL ranges);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoderSettings_System_Collections_Generic_IEnumerable_i32___GetAllowedCodePoints_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Text_Encodings_Web_TextEncoderSettings_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Text_Encodings_Web_UrlEncoder_get_type_handle(void);

SG_HNDL_NONNULL System_Text_Encodings_Web_UrlEncoder_UrlEncoder__Create_0__1__TextEncoderSettings(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL settings);

SG_HNDL_NONNULL System_Text_Encodings_Web_UrlEncoder_UrlEncoder__Create_0__1__UnicodeRangeArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL allowedRanges);

SG_HNDL_NONNULL System_Text_Encodings_Web_UrlEncoder_UrlEncoder__get_Default_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Encodings_Web_UrlEncoder_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Text_Unicode_UnicodeRange_get_type_handle(void);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRange_ctor_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t firstCodePoint, int32_t length);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRange_UnicodeRange__Create_0__2__Char_Char(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t firstCharacter, int16_t lastCharacter);

int32_t System_Text_Unicode_UnicodeRange_i32__get_FirstCodePoint_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Text_Unicode_UnicodeRange_i32__get_Length_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRange_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_All_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_AlphabeticPresentationForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Arabic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ArabicExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ArabicPresentationFormsA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ArabicPresentationFormsB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ArabicSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Armenian_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Arrows_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Balinese_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Bamum_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_BasicLatin_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Batak_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Bengali_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_BlockElements_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Bopomofo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_BopomofoExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_BoxDrawing_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_BraillePatterns_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Buginese_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Buhid_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Cham_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Cherokee_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CherokeeSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkCompatibility_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkCompatibilityForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkCompatibilityIdeographs_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkRadicalsSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkStrokes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkSymbolsandPunctuation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkUnifiedIdeographs_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CjkUnifiedIdeographsExtensionA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CombiningDiacriticalMarks_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CombiningDiacriticalMarksExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CombiningDiacriticalMarksforSymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CombiningDiacriticalMarksSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CombiningHalfMarks_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CommonIndicNumberForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ControlPictures_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Coptic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CurrencySymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Cyrillic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CyrillicExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CyrillicExtendedB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CyrillicExtendedC_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_CyrillicSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Devanagari_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_DevanagariExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Dingbats_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_EnclosedAlphanumerics_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_EnclosedCjkLettersandMonths_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Ethiopic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_EthiopicExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_EthiopicExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_EthiopicSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GeneralPunctuation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GeometricShapes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Georgian_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GeorgianExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GeorgianSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Glagolitic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GreekandCoptic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_GreekExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Gujarati_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Gurmukhi_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HalfwidthandFullwidthForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HangulCompatibilityJamo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HangulJamo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HangulJamoExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HangulJamoExtendedB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_HangulSyllables_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Hanunoo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Hebrew_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Hiragana_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_IdeographicDescriptionCharacters_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_IpaExtensions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Javanese_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Kanbun_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_KangxiRadicals_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Kannada_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Katakana_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_KatakanaPhoneticExtensions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_KayahLi_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Khmer_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_KhmerSymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Lao_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Latin1Supplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedAdditional_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedC_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedD_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LatinExtendedE_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Lepcha_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_LetterlikeSymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Limbu_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Lisu_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Malayalam_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Mandaic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MathematicalOperators_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MeeteiMayek_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MeeteiMayekExtensions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MiscellaneousMathematicalSymbolsA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MiscellaneousMathematicalSymbolsB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MiscellaneousSymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MiscellaneousSymbolsandArrows_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MiscellaneousTechnical_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_ModifierToneLetters_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Mongolian_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Myanmar_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MyanmarExtendedA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_MyanmarExtendedB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_NewTaiLue_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_NKo_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_None_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_NumberForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Ogham_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_OlChiki_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_OpticalCharacterRecognition_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Oriya_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Phagspa_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_PhoneticExtensions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_PhoneticExtensionsSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Rejang_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Runic_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Samaritan_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Saurashtra_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Sinhala_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SmallFormVariants_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SpacingModifierLetters_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Specials_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Sundanese_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SundaneseSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SuperscriptsandSubscripts_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SupplementalArrowsA_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SupplementalArrowsB_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SupplementalMathematicalOperators_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SupplementalPunctuation_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SylotiNagri_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Syriac_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_SyriacSupplement_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Tagalog_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Tagbanwa_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_TaiLe_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_TaiTham_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_TaiViet_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Tamil_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Telugu_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Thaana_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Thai_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Tibetan_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Tifinagh_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_UnifiedCanadianAboriginalSyllabics_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_UnifiedCanadianAboriginalSyllabicsExtended_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_Vai_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_VariationSelectors_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_VedicExtensions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_VerticalForms_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_YijingHexagramSymbols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_YiRadicals_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Text_Unicode_UnicodeRanges_UnicodeRange__get_YiSyllables_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Text_Encodings_Web

