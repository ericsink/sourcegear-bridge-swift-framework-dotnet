// this file is automatically generated
// Copyright 2021 SourceGear

import jumptable_dotnet;

// System
// System.Runtime
// System.Runtime.CompilerServices
extension System.Runtime.CompilerServices {
// type: System.Runtime.CompilerServices.CompilerMarshalOverride
public struct CompilerMarshalOverride {
} // CompilerMarshalOverride


// type: System.Runtime.CompilerServices.CppInlineNamespaceAttribute
    /**
    Defines the inline namespace in C++/CLI.

    */
public final class CppInlineNamespaceAttribute
    :
    dotnet.System.Attribute
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_CompilerServices_CppInlineNamespaceAttribute_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor(System.String)
// docid: M:System.Runtime.CompilerServices.CppInlineNamespaceAttribute.#ctor(System.String)
    /**
    Initializes a new instance of the  class with the specified dotted namespace name.

    - Parameter dottedName: The dotted name of the defined namespace.
    */
    public init(dottedName : dotnet.System.String) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Runtime_CompilerServices_CppInlineNamespaceAttribute_ctor_0__1__String(&__thrown, dottedName.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
} // CppInlineNamespaceAttribute


// type: System.Runtime.CompilerServices.HasCopySemanticsAttribute
    /**
    This class is not used in the .NET Framework version 2.0 and is reserved for future use. This class cannot be inherited.

    */
public final class HasCopySemanticsAttribute
    :
    dotnet.System.Attribute
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_CompilerServices_HasCopySemanticsAttribute_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.Runtime.CompilerServices.HasCopySemanticsAttribute.#ctor
    /**
    Initializes a new instance of the  class.

    */
    public init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_Runtime_CompilerServices_HasCopySemanticsAttribute_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
} // HasCopySemanticsAttribute


// type: System.Runtime.CompilerServices.IsBoxed
public struct IsBoxed {
} // IsBoxed


// type: System.Runtime.CompilerServices.IsByValue
public struct IsByValue {
} // IsByValue


// type: System.Runtime.CompilerServices.IsCopyConstructed
public struct IsCopyConstructed {
} // IsCopyConstructed


// type: System.Runtime.CompilerServices.IsExplicitlyDereferenced
public struct IsExplicitlyDereferenced {
} // IsExplicitlyDereferenced


// type: System.Runtime.CompilerServices.IsImplicitlyDereferenced
public struct IsImplicitlyDereferenced {
} // IsImplicitlyDereferenced


// type: System.Runtime.CompilerServices.IsJitIntrinsic
public struct IsJitIntrinsic {
} // IsJitIntrinsic


// type: System.Runtime.CompilerServices.IsLong
public struct IsLong {
} // IsLong


// type: System.Runtime.CompilerServices.IsPinned
public struct IsPinned {
} // IsPinned


// type: System.Runtime.CompilerServices.IsSignUnspecifiedByte
public struct IsSignUnspecifiedByte {
} // IsSignUnspecifiedByte


// type: System.Runtime.CompilerServices.IsUdtReturn
public struct IsUdtReturn {
} // IsUdtReturn


// type: System.Runtime.CompilerServices.NativeCppClassAttribute
    /**
    Applies metadata to an assembly that indicates that a type is an unmanaged type.  This class cannot be inherited.

    */
public final class NativeCppClassAttribute
    :
    dotnet.System.Attribute
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_CompilerServices_NativeCppClassAttribute_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.Runtime.CompilerServices.NativeCppClassAttribute.#ctor
    /**
    Initializes a new instance of the  class.

    */
    public init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_Runtime_CompilerServices_NativeCppClassAttribute_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
} // NativeCppClassAttribute


// type: System.Runtime.CompilerServices.RequiredAttributeAttribute
    /**
    Specifies that an importing compiler must fully understand the semantics of a type definition, or refuse to use it.  This class cannot be inherited.

    */
public final class RequiredAttributeAttribute
    :
    dotnet.System.Attribute
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_CompilerServices_RequiredAttributeAttribute_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor(System.Type)
// docid: M:System.Runtime.CompilerServices.RequiredAttributeAttribute.#ctor(System.Type)
    /**
    Initializes a new instance of the  class.

    - Parameter requiredContract: A type that an importing compiler must fully understand.  
  
 This parameter is not supported in the .NET Framework version 2.0 and later.
    */
    public init(requiredContract : dotnet.System.Type_) throws {
        var __thrown : NullableHandle = nil;
        let h = System_Runtime_CompilerServices_RequiredAttributeAttribute_ctor_0__1__Type(&__thrown, requiredContract.get_handle());
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // [IsSpecialName] System.Type get_RequiredContract()
// docid: M:System.Runtime.CompilerServices.RequiredAttributeAttribute.get_RequiredContract
    public func get_RequiredContract() throws -> dotnet.System.Type_ {
        var __thrown : NullableHandle = nil;
        let __return = System_Runtime_CompilerServices_RequiredAttributeAttribute_Type__get_RequiredContract_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.Type_(hndl : __return);
        }
    }
    /**
    Gets a type that an importing compiler must fully understand.

    */
    public var RequiredContract : dotnet.System.Type_ {
        get {
            return try! get_RequiredContract();
        }
    }
} // RequiredAttributeAttribute


// type: System.Runtime.CompilerServices.ScopelessEnumAttribute
    /**
    Indicates that a native enumeration is not qualified by the enumeration type name. This class cannot be inherited.

    */
public final class ScopelessEnumAttribute
    :
    dotnet.System.Attribute
{
    public class override func get_type_handle() -> TypeHandle {
        return System_Runtime_CompilerServices_ScopelessEnumAttribute_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.Runtime.CompilerServices.ScopelessEnumAttribute.#ctor
    /**
    Initializes a new instance of the  class.

    */
    public init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_Runtime_CompilerServices_ScopelessEnumAttribute_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
} // ScopelessEnumAttribute


}



