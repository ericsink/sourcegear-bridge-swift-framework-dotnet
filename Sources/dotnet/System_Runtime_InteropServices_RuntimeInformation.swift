// this file is automatically generated
// Copyright 2021 SourceGear

import jumptable_dotnet;

// System
// System.Runtime
// System.Runtime.InteropServices
extension System.Runtime.InteropServices {
// type: System.Runtime.InteropServices.Architecture
    /**
    Indicates the processor architecture.

    */
public struct Architecture : SGBridgeGenericValue {
    let v : Swift.Int32;
    public init(val: Swift.Int32) { self.v = val; }
    public func get_value() -> Swift.Int32 { return self.v; }
    public static func get_type_handle() -> TypeHandle {
        return System_Runtime_InteropServices_Architecture_get_type_handle();
    }
    public func to_gval() -> GVal { return GVal(self.v); }
    public func dup_gval() -> GVal { return to_gval(); }
    public init(gval: GVal) { self.v = Swift.Int32(gval); }
    // static field: System.Runtime.InteropServices.Architecture X86
    /**
    An Intel-based 32-bit processor architecture.

    */
    public static var X86 : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_X86());
            return __return;
        }
    }
    // static field: System.Runtime.InteropServices.Architecture X64
    /**
    An Intel-based 64-bit processor architecture.

    */
    public static var X64 : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_X64());
            return __return;
        }
    }
    // static field: System.Runtime.InteropServices.Architecture Arm
    /**
    A 32-bit ARM processor architecture.

    */
    public static var Arm : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_Arm());
            return __return;
        }
    }
    // static field: System.Runtime.InteropServices.Architecture Arm64
    /**
    A 64-bit ARM processor architecture.

    */
    public static var Arm64 : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_Arm64());
            return __return;
        }
    }
    // static field: System.Runtime.InteropServices.Architecture Wasm
    /**
    The WebAssembly platform.

    */
    public static var Wasm : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_Wasm());
            return __return;
        }
    }
    // static field: System.Runtime.InteropServices.Architecture S390x
    public static var S390x : dotnet.System.Runtime.InteropServices.Architecture {
        get {
        let __return = dotnet.System.Runtime.InteropServices.Architecture(val: System_Runtime_InteropServices_Architecture_get_S390x());
            return __return;
        }
    }
} // Architecture


// type: System.Runtime.InteropServices.OSPlatform
// boxed value type
    /**
    Represents an operating system platform.

    */
public final class OSPlatform
    :
    dotnet.System.Object
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_InteropServices_OSPlatform_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    /**
    Gets an object that represents the FreeBSD operating system.

    */
    public static var FreeBSD : dotnet.System.Runtime.InteropServices.OSPlatform {
        get {
            return try! get_FreeBSD();
        }
    }
    /**
    Gets an object that represents the Linux operating system.

    */
    public static var Linux : dotnet.System.Runtime.InteropServices.OSPlatform {
        get {
            return try! get_Linux();
        }
    }
    /**
    Gets an object that represents the OSX operating system.

    */
    public static var OSX : dotnet.System.Runtime.InteropServices.OSPlatform {
        get {
            return try! get_OSX();
        }
    }
    /**
    Gets an object that represents the Windows operating system.

    */
    public static var Windows : dotnet.System.Runtime.InteropServices.OSPlatform {
        get {
            return try! get_Windows();
        }
    }
    public override init() {
        let h = System_Runtime_InteropServices_OSPlatform_implicit_ctor();
            super.init(hndl: h);
    }
    // System.Runtime.InteropServices.OSPlatform Create(System.String)
// docid: M:System.Runtime.InteropServices.OSPlatform.Create(System.String)
    /**
    Creates a new  instance.

    - Parameter osPlatform: The name of the platform that this instance represents.
    - Returns: An object that represents the  operating system.

    */
    public class func Create(osPlatform : dotnet.System.String) throws -> dotnet.System.Runtime.InteropServices.OSPlatform {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_OSPlatform__Create_0__1__String(&__thrown, osPlatform.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.OSPlatform(hndl : __return);
        }
    }
    // bool Equals(System.Object)
// docid: M:System.Runtime.InteropServices.OSPlatform.Equals(System.Object)
    /**
    Determines whether the current  instance is equal to the specified object.

    - Parameter obj: 
         if  is a  instance and its name is the same as the current object; otherwise, .
    - Returns: 
         if  is a  instance and its name is the same as the current object.

    */
    public override func Equals(obj : Optional<dotnet.System.Object>) throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_bool__Equals_0__1__Object(&__thrown, self.get_handle(), obj?.get_handle() ?? nil);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // bool Equals(System.Runtime.InteropServices.OSPlatform)
// docid: M:System.Runtime.InteropServices.OSPlatform.Equals(System.Runtime.InteropServices.OSPlatform)
    /**
    Determines whether the current instance and the specified  instance are equal.

    - Parameter other: The object to compare with the current instance.
    - Returns: 
         if the current instance and  are equal; otherwise, .

    */
    public func Equals(other : dotnet.System.Runtime.InteropServices.OSPlatform) throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_bool__Equals_0__1__OSPlatform(&__thrown, self.get_handle(), other.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // System.Int32 GetHashCode()
// docid: M:System.Runtime.InteropServices.OSPlatform.GetHashCode
    /**
    Returns the hash code for this instance.

    - Returns: The hash code for this instance.

    */
    public override func GetHashCode() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_i32__GetHashCode_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    // [IsSpecialName] bool op_Equality(System.Runtime.InteropServices.OSPlatform, System.Runtime.InteropServices.OSPlatform)
// docid: M:System.Runtime.InteropServices.OSPlatform.op_Equality(System.Runtime.InteropServices.OSPlatform,System.Runtime.InteropServices.OSPlatform)
    /**
    Determines whether two  objects are equal.

    - Parameter left: The first object to compare.
    - Parameter right: The second object to compare.
    - Returns: 
         if  and  are equal; otherwise, .

    */
    public class func op_Equality(left : dotnet.System.Runtime.InteropServices.OSPlatform, right : dotnet.System.Runtime.InteropServices.OSPlatform) throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_bool__op_Equality_0__2__OSPlatform_OSPlatform(&__thrown, left.get_handle(), right.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] bool op_Inequality(System.Runtime.InteropServices.OSPlatform, System.Runtime.InteropServices.OSPlatform)
// docid: M:System.Runtime.InteropServices.OSPlatform.op_Inequality(System.Runtime.InteropServices.OSPlatform,System.Runtime.InteropServices.OSPlatform)
    /**
    Determines whether two  instances are unequal.

    - Parameter left: The first object to compare.
    - Parameter right: The second object to compare.
    - Returns: 
         if  and  are unequal; otherwise, .

    */
    public class func op_Inequality(left : dotnet.System.Runtime.InteropServices.OSPlatform, right : dotnet.System.Runtime.InteropServices.OSPlatform) throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_bool__op_Inequality_0__2__OSPlatform_OSPlatform(&__thrown, left.get_handle(), right.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // System.String ToString()
// docid: M:System.Runtime.InteropServices.OSPlatform.ToString
    /**
    Returns the string representation of this  instance.

    - Returns: A string that represents this  instance.

    */
    public override func ToString() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_String__ToString_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.OSPlatform get_FreeBSD()
// docid: M:System.Runtime.InteropServices.OSPlatform.get_FreeBSD
    public class func get_FreeBSD() throws -> dotnet.System.Runtime.InteropServices.OSPlatform {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_OSPlatform__get_FreeBSD_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.OSPlatform(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.OSPlatform get_Linux()
// docid: M:System.Runtime.InteropServices.OSPlatform.get_Linux
    public class func get_Linux() throws -> dotnet.System.Runtime.InteropServices.OSPlatform {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_OSPlatform__get_Linux_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.OSPlatform(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.OSPlatform get_OSX()
// docid: M:System.Runtime.InteropServices.OSPlatform.get_OSX
    public class func get_OSX() throws -> dotnet.System.Runtime.InteropServices.OSPlatform {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_OSPlatform__get_OSX_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.OSPlatform(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.OSPlatform get_Windows()
// docid: M:System.Runtime.InteropServices.OSPlatform.get_Windows
    public class func get_Windows() throws -> dotnet.System.Runtime.InteropServices.OSPlatform {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_OSPlatform_OSPlatform__get_Windows_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.OSPlatform(hndl : __return);
        }
    }
} // OSPlatform


// type: System.Runtime.InteropServices.RuntimeInformation
public struct RuntimeInformation {
    // bool IsOSPlatform(System.Runtime.InteropServices.OSPlatform)
// docid: M:System.Runtime.InteropServices.RuntimeInformation.IsOSPlatform(System.Runtime.InteropServices.OSPlatform)
    /**
    Indicates whether the current application is running on the specified platform.

    - Parameter osPlatform: A platform.
    - Returns: 
         if the current app is running on the specified platform; otherwise, .

    */
    public static func IsOSPlatform(osPlatform : dotnet.System.Runtime.InteropServices.OSPlatform) throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_bool__IsOSPlatform_0__1__OSPlatform(&__thrown, osPlatform.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] System.String get_FrameworkDescription()
// docid: M:System.Runtime.InteropServices.RuntimeInformation.get_FrameworkDescription
    public static func get_FrameworkDescription() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_String__get_FrameworkDescription_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.Architecture get_OSArchitecture()
// docid: M:System.Runtime.InteropServices.RuntimeInformation.get_OSArchitecture
    public static func get_OSArchitecture() throws -> dotnet.System.Runtime.InteropServices.Architecture {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_Architecture__get_OSArchitecture_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.Architecture(val: __return);
        }
    }
    // [IsSpecialName] System.String get_OSDescription()
// docid: M:System.Runtime.InteropServices.RuntimeInformation.get_OSDescription
    public static func get_OSDescription() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_String__get_OSDescription_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.Runtime.InteropServices.Architecture get_ProcessArchitecture()
// docid: M:System.Runtime.InteropServices.RuntimeInformation.get_ProcessArchitecture
    public static func get_ProcessArchitecture() throws -> dotnet.System.Runtime.InteropServices.Architecture {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_Architecture__get_ProcessArchitecture_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Runtime.InteropServices.Architecture(val: __return);
        }
    }
    // [IsSpecialName] System.String get_RuntimeIdentifier()
// docid: M:System.Runtime.InteropServices.RuntimeInformation.get_RuntimeIdentifier
    public static func get_RuntimeIdentifier() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_InteropServices_RuntimeInformation_String__get_RuntimeIdentifier_0__0(&__thrown);
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    /**
    Returns a string that indicates the name of the .NET installation on which an app is running.

    */
    public static var FrameworkDescription : dotnet.System.String {
        get {
            return try! get_FrameworkDescription();
        }
    }
    /**
    Gets the platform architecture on which the current app is running.

    */
    public static var OSArchitecture : dotnet.System.Runtime.InteropServices.Architecture {
        get {
            return try! get_OSArchitecture();
        }
    }
    /**
    Gets a string that describes the operating system on which the app is running.

    */
    public static var OSDescription : dotnet.System.String {
        get {
            return try! get_OSDescription();
        }
    }
    /**
    Gets the process architecture of the currently running app.

    */
    public static var ProcessArchitecture : dotnet.System.Runtime.InteropServices.Architecture {
        get {
            return try! get_ProcessArchitecture();
        }
    }
    /**
    Returns an opaque string that identifies the platform on which an app is running.

    */
    public static var RuntimeIdentifier : dotnet.System.String {
        get {
            return try! get_RuntimeIdentifier();
        }
    }
} // RuntimeInformation


}


