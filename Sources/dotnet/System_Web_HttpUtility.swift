// this file is automatically generated
// Copyright 2021 SourceGear

import jumptable_dotnet;

// System
// System.Web
extension System.Web {
// type: System.Web.HttpUtility
    /**
    Provides methods for encoding and decoding URLs when processing Web requests. This class cannot be inherited.

    */
public final class HttpUtility
    :
    dotnet.System.Object
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Web_HttpUtility_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.Web.HttpUtility.#ctor
    /**
    Initializes a new instance of the  class.

    */
    public override init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_Web_HttpUtility_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // System.String HtmlAttributeEncode(System.String)
// docid: M:System.Web.HttpUtility.HtmlAttributeEncode(System.String)
    /**
    Minimally converts a string to an HTML-encoded string.

    - Parameter s: The string to encode.
    - Returns: An encoded string.

    */
    public class func HtmlAttributeEncode(s : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__HtmlAttributeEncode_0__1__String(&__thrown, s?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // void HtmlAttributeEncode(System.String, System.IO.TextWriter)
// docid: M:System.Web.HttpUtility.HtmlAttributeEncode(System.String,System.IO.TextWriter)
    /**
    Minimally converts a string into an HTML-encoded string and sends the encoded string to a  output stream.

    - Parameter s: The string to encode
    - Parameter output: A  output stream.
    */
    public class func HtmlAttributeEncode(s : Optional<dotnet.System.String>, output : dotnet.System.IO.TextWriter) throws {
        var __thrown : NullableHandle = nil;
        System_Web_HttpUtility_void__HtmlAttributeEncode_0__2__String_TextWriter(&__thrown, s?.get_handle() ?? nil, output.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // System.String HtmlDecode(System.String)
// docid: M:System.Web.HttpUtility.HtmlDecode(System.String)
    /**
    Converts a string that has been HTML-encoded for HTTP transmission into a decoded string.

    - Parameter s: The string to decode.
    - Returns: A decoded string.

    */
    public class func HtmlDecode(s : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__HtmlDecode_0__1__String(&__thrown, s?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // void HtmlDecode(System.String, System.IO.TextWriter)
// docid: M:System.Web.HttpUtility.HtmlDecode(System.String,System.IO.TextWriter)
    /**
    Converts a string that has been HTML-encoded into a decoded string, and sends the decoded string to a  output stream.

    - Parameter s: The string to decode.
    - Parameter output: A  stream of output.
    */
    public class func HtmlDecode(s : Optional<dotnet.System.String>, output : dotnet.System.IO.TextWriter) throws {
        var __thrown : NullableHandle = nil;
        System_Web_HttpUtility_void__HtmlDecode_0__2__String_TextWriter(&__thrown, s?.get_handle() ?? nil, output.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // System.String HtmlEncode(System.Object)
// docid: M:System.Web.HttpUtility.HtmlEncode(System.Object)
    /**
    Converts an object's string representation into an HTML-encoded string, and returns the encoded string.

    - Parameter value: An object.
    - Returns: An encoded string.

    */
    public class func HtmlEncode(value : Optional<dotnet.System.Object>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__HtmlEncode_0__1__Object(&__thrown, value?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String HtmlEncode(System.String)
// docid: M:System.Web.HttpUtility.HtmlEncode(System.String)
    /**
    Converts a string to an HTML-encoded string.

    - Parameter s: The string to encode.
    - Returns: An encoded string.

    */
    public class func HtmlEncode(s : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__HtmlEncode_0__1__String(&__thrown, s?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // void HtmlEncode(System.String, System.IO.TextWriter)
// docid: M:System.Web.HttpUtility.HtmlEncode(System.String,System.IO.TextWriter)
    /**
    Converts a string into an HTML-encoded string, and returns the output as a  stream of output.

    - Parameter s: The string to encode
    - Parameter output: A  output stream.
    */
    public class func HtmlEncode(s : Optional<dotnet.System.String>, output : dotnet.System.IO.TextWriter) throws {
        var __thrown : NullableHandle = nil;
        System_Web_HttpUtility_void__HtmlEncode_0__2__String_TextWriter(&__thrown, s?.get_handle() ?? nil, output.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // System.String JavaScriptStringEncode(System.String)
// docid: M:System.Web.HttpUtility.JavaScriptStringEncode(System.String)
    /**
    Encodes a string.

    - Parameter value: A string to encode.
    - Returns: An encoded string.

    */
    public class func JavaScriptStringEncode(value : Optional<dotnet.System.String>) throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__JavaScriptStringEncode_0__1__String(&__thrown, value?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // System.String JavaScriptStringEncode(System.String, bool)
// docid: M:System.Web.HttpUtility.JavaScriptStringEncode(System.String,System.Boolean)
    /**
    Encodes a string.

    - Parameter value: A string to encode.
    - Parameter addDoubleQuotes: A value that indicates whether double quotation marks will be included around the encoded string.
    - Returns: An encoded string.

    */
    public class func JavaScriptStringEncode(value : Optional<dotnet.System.String>, addDoubleQuotes : Bool) throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__JavaScriptStringEncode_0__2__String_bool(&__thrown, value?.get_handle() ?? nil, Swift.Int32(addDoubleQuotes ? 1 : 0));
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // System.Collections.Specialized.NameValueCollection ParseQueryString(System.String)
// docid: M:System.Web.HttpUtility.ParseQueryString(System.String)
    /**
    Parses a query string into a  using  encoding.

    - Parameter query: The query string to parse.
    - Returns: A  of query parameters and values.

    */
    public class func ParseQueryString(query : dotnet.System.String) throws -> dotnet.System.Collections.Specialized.NameValueCollection {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_NameValueCollection__ParseQueryString_0__1__String(&__thrown, query.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Collections.Specialized.NameValueCollection(hndl : __return);
        }
    }
    // System.Collections.Specialized.NameValueCollection ParseQueryString(System.String, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.ParseQueryString(System.String,System.Text.Encoding)
    /**
    Parses a query string into a  using the specified .

    - Parameter query: The query string to parse.
    - Parameter encoding: The  to use.
    - Returns: A  of query parameters and values.

    */
    public class func ParseQueryString(query : dotnet.System.String, encoding : dotnet.System.Text.Encoding) throws -> dotnet.System.Collections.Specialized.NameValueCollection {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_NameValueCollection__ParseQueryString_0__2__String_Encoding(&__thrown, query.get_handle(), encoding.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Collections.Specialized.NameValueCollection(hndl : __return);
        }
    }
    // System.String UrlDecode(System.Byte[], System.Int32, System.Int32, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
    /**
    Converts a URL-encoded byte array into a decoded string using the specified encoding object, starting at the specified position in the array, and continuing for the specified number of bytes.

    - Parameter bytes: The array of bytes to decode.
    - Parameter offset: The position in the byte to begin decoding.
    - Parameter count: The number of bytes to decode.
    - Parameter e: The  object that specifies the decoding scheme.
    - Returns: A decoded string.

    */
    public class func UrlDecode(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>, offset : Swift.Int32, count : Swift.Int32, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlDecode_0__4__u8Array_i32_i32_Encoding(&__thrown, (bytes?.get_handle()), offset, count, e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlDecode(System.Byte[], System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlDecode(System.Byte[],System.Text.Encoding)
    /**
    Converts a URL-encoded byte array into a decoded string using the specified decoding object.

    - Parameter bytes: The array of bytes to decode.
    - Parameter e: The  that specifies the decoding scheme.
    - Returns: A decoded string.

    */
    public class func UrlDecode(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlDecode_0__2__u8Array_Encoding(&__thrown, (bytes?.get_handle()), e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlDecode(System.String)
// docid: M:System.Web.HttpUtility.UrlDecode(System.String)
    /**
    Converts a string that has been encoded for transmission in a URL into a decoded string.

    - Parameter str: The string to decode.
    - Returns: A decoded string.

    */
    public class func UrlDecode(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlDecode_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlDecode(System.String, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlDecode(System.String,System.Text.Encoding)
    /**
    Converts a URL-encoded string into a decoded string, using the specified encoding object.

    - Parameter str: The string to decode.
    - Parameter e: The  that specifies the decoding scheme.
    - Returns: A decoded string.

    */
    public class func UrlDecode(str : Optional<dotnet.System.String>, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlDecode_0__2__String_Encoding(&__thrown, str?.get_handle() ?? nil, e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlDecodeToBytes(System.Byte[])
// docid: M:System.Web.HttpUtility.UrlDecodeToBytes(System.Byte[])
    /**
    Converts a URL-encoded array of bytes into a decoded array of bytes.

    - Parameter bytes: The array of bytes to decode.
    - Returns: A decoded array of bytes.

    */
    public class func UrlDecodeToBytes(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlDecodeToBytes_0__1__u8Array(&__thrown, (bytes?.get_handle()));
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlDecodeToBytes(System.Byte[], System.Int32, System.Int32)
// docid: M:System.Web.HttpUtility.UrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
    /**
    Converts a URL-encoded array of bytes into a decoded array of bytes, starting at the specified position in the array and continuing for the specified number of bytes.

    - Parameter bytes: The array of bytes to decode.
    - Parameter offset: The position in the byte array at which to begin decoding.
    - Parameter count: The number of bytes to decode.
    - Returns: A decoded array of bytes.

    */
    public class func UrlDecodeToBytes(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>, offset : Swift.Int32, count : Swift.Int32) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlDecodeToBytes_0__3__u8Array_i32_i32(&__thrown, (bytes?.get_handle()), offset, count);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlDecodeToBytes(System.String)
// docid: M:System.Web.HttpUtility.UrlDecodeToBytes(System.String)
    /**
    Converts a URL-encoded string into a decoded array of bytes.

    - Parameter str: The string to decode.
    - Returns: A decoded array of bytes.

    */
    public class func UrlDecodeToBytes(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlDecodeToBytes_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlDecodeToBytes(System.String, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlDecodeToBytes(System.String,System.Text.Encoding)
    /**
    Converts a URL-encoded string into a decoded array of bytes using the specified decoding object.

    - Parameter str: The string to decode.
    - Parameter e: The  object that specifies the decoding scheme.
    - Returns: A decoded array of bytes.

    */
    public class func UrlDecodeToBytes(str : Optional<dotnet.System.String>, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlDecodeToBytes_0__2__String_Encoding(&__thrown, str?.get_handle() ?? nil, e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlEncode(System.Byte[])
// docid: M:System.Web.HttpUtility.UrlEncode(System.Byte[])
    /**
    Converts a byte array into an encoded URL string.

    - Parameter bytes: The array of bytes to encode.
    - Returns: An encoded string.

    */
    public class func UrlEncode(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlEncode_0__1__u8Array(&__thrown, (bytes?.get_handle()));
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlEncode(System.Byte[], System.Int32, System.Int32)
// docid: M:System.Web.HttpUtility.UrlEncode(System.Byte[],System.Int32,System.Int32)
    /**
    Converts a byte array into a URL-encoded string, starting at the specified position in the array and continuing for the specified number of bytes.

    - Parameter bytes: The array of bytes to encode.
    - Parameter offset: The position in the byte array at which to begin encoding.
    - Parameter count: The number of bytes to encode.
    - Returns: An encoded string.

    */
    public class func UrlEncode(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>, offset : Swift.Int32, count : Swift.Int32) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlEncode_0__3__u8Array_i32_i32(&__thrown, (bytes?.get_handle()), offset, count);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlEncode(System.String)
// docid: M:System.Web.HttpUtility.UrlEncode(System.String)
    /**
    Encodes a URL string.

    - Parameter str: The text to encode.
    - Returns: An encoded string.

    */
    public class func UrlEncode(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlEncode_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlEncode(System.String, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlEncode(System.String,System.Text.Encoding)
    /**
    Encodes a URL string using the specified encoding object.

    - Parameter str: The text to encode.
    - Parameter e: The  object that specifies the encoding scheme.
    - Returns: An encoded string.

    */
    public class func UrlEncode(str : Optional<dotnet.System.String>, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlEncode_0__2__String_Encoding(&__thrown, str?.get_handle() ?? nil, e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlEncodeToBytes(System.Byte[])
// docid: M:System.Web.HttpUtility.UrlEncodeToBytes(System.Byte[])
    /**
    Converts an array of bytes into a URL-encoded array of bytes.

    - Parameter bytes: The array of bytes to encode.
    - Returns: An encoded array of bytes.

    */
    public class func UrlEncodeToBytes(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlEncodeToBytes_0__1__u8Array(&__thrown, (bytes?.get_handle()));
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlEncodeToBytes(System.Byte[], System.Int32, System.Int32)
// docid: M:System.Web.HttpUtility.UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
    /**
    Converts an array of bytes into a URL-encoded array of bytes, starting at the specified position in the array and continuing for the specified number of bytes.

    - Parameter bytes: The array of bytes to encode.
    - Parameter offset: The position in the byte array at which to begin encoding.
    - Parameter count: The number of bytes to encode.
    - Returns: An encoded array of bytes.

    */
    public class func UrlEncodeToBytes(bytes : Optional<dotnet.System_Arr<Swift.UInt8>>, offset : Swift.Int32, count : Swift.Int32) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlEncodeToBytes_0__3__u8Array_i32_i32(&__thrown, (bytes?.get_handle()), offset, count);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlEncodeToBytes(System.String)
// docid: M:System.Web.HttpUtility.UrlEncodeToBytes(System.String)
    /**
    Converts a string into a URL-encoded array of bytes.

    - Parameter str: The string to encode.
    - Returns: An encoded array of bytes.

    */
    public class func UrlEncodeToBytes(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlEncodeToBytes_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlEncodeToBytes(System.String, System.Text.Encoding)
// docid: M:System.Web.HttpUtility.UrlEncodeToBytes(System.String,System.Text.Encoding)
    /**
    Converts a string into a URL-encoded array of bytes using the specified encoding object.

    - Parameter str: The string to encode
    - Parameter e: The  that specifies the encoding scheme.
    - Returns: An encoded array of bytes.

    */
    public class func UrlEncodeToBytes(str : Optional<dotnet.System.String>, e : dotnet.System.Text.Encoding) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlEncodeToBytes_0__2__String_Encoding(&__thrown, str?.get_handle() ?? nil, e.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlEncodeUnicode(System.String)
// docid: M:System.Web.HttpUtility.UrlEncodeUnicode(System.String)
    /**
    Converts a string into a Unicode string.

    - Parameter str: The string to convert.
    - Returns: A Unicode string in % notation.

    */
    public class func UrlEncodeUnicode(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlEncodeUnicode_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.Byte[] UrlEncodeUnicodeToBytes(System.String)
// docid: M:System.Web.HttpUtility.UrlEncodeUnicodeToBytes(System.String)
    /**
    Converts a Unicode string into an array of bytes.

    - Parameter str: The string to convert.
    - Returns: A byte array.

    */
    public class func UrlEncodeUnicodeToBytes(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System_Arr<Swift.UInt8>> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_u8Array__UrlEncodeUnicodeToBytes_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System_Arr<Swift.UInt8>(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
    // System.String UrlPathEncode(System.String)
// docid: M:System.Web.HttpUtility.UrlPathEncode(System.String)
    /**
    Do not use; intended only for browser compatibility. Use .

    - Parameter str: The text to encode.
    - Returns: The encoded text.

    */
    public class func UrlPathEncode(str : Optional<dotnet.System.String>) throws -> Optional<dotnet.System.String> {
        var __thrown : NullableHandle = nil;
        let __return = System_Web_HttpUtility_String__UrlPathEncode_0__1__String(&__thrown, str?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.String(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
} // HttpUtility


}

