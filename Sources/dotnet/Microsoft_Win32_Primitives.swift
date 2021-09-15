// this file is automatically generated
// Copyright 2021 SourceGear

import jumptable_dotnet;

// System
// System.ComponentModel
extension System.ComponentModel {
// type: System.ComponentModel.Win32Exception
    /**
    Throws an exception for a Win32 error code.

    */
open class Win32Exception
    :
    dotnet.System.Runtime.InteropServices.ExternalException
{
    open class override func get_type_handle() -> TypeHandle {
        return System_ComponentModel_Win32Exception_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.ComponentModel.Win32Exception.#ctor
    /**
    Initializes a new instance of the  class with the last Win32 error that occurred.

    */
    public override init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_Win32Exception_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.Int32)
// docid: M:System.ComponentModel.Win32Exception.#ctor(System.Int32)
    /**
    Initializes a new instance of the  class with the specified error.

    - Parameter error: The Win32 error code associated with this exception.
    */
    public init(error : Swift.Int32) throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_Win32Exception_ctor_0__1__i32(&__thrown, error);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.Int32, System.String)
// docid: M:System.ComponentModel.Win32Exception.#ctor(System.Int32,System.String)
    /**
    Initializes a new instance of the  class with the specified error and the specified detailed description.

    - Parameter error: The Win32 error code associated with this exception.
    - Parameter message: A detailed description of the error.
    */
    public init(error : Swift.Int32, message : Optional<dotnet.System.String>) throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_Win32Exception_ctor_0__2__i32_String(&__thrown, error, message?.get_handle() ?? nil);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String)
// docid: M:System.ComponentModel.Win32Exception.#ctor(System.String)
    /**
    Initializes a new instance of the  class with the specified detailed description.

    - Parameter message: A detailed description of the error.
    */
    public override init(message : Optional<dotnet.System.String>) throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_Win32Exception_ctor_0__1__String(&__thrown, message?.get_handle() ?? nil);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(System.String, System.Exception)
// docid: M:System.ComponentModel.Win32Exception.#ctor(System.String,System.Exception)
    /**
    Initializes a new instance of the  class with the specified detailed description and the specified exception.

    - Parameter message: A detailed description of the error.
    - Parameter innerException: A reference to the inner exception that is the cause of this exception.
    */
    public init(message : Optional<dotnet.System.String>, innerException : Optional<dotnet.System.Exception>) throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_Win32Exception_ctor_0__2__String_Exception(&__thrown, message?.get_handle() ?? nil, innerException?.get_handle() ?? nil);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // void GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
// docid: M:System.ComponentModel.Win32Exception.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
    /**
    Sets the  object with the file name and line number at which this  occurred.

    - Parameter info: A .
    - Parameter context: The contextual information about the source or destination.
    */
    open override func GetObjectData(info : dotnet.System.Runtime.Serialization.SerializationInfo, context : dotnet.System.Runtime.Serialization.StreamingContext) throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_Win32Exception_void__GetObjectData_0__2__SerializationInfo_StreamingContext(&__thrown, self.get_handle(), info.get_handle(), context.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // System.String ToString()
// docid: M:System.ComponentModel.Win32Exception.ToString
    /**
    Returns a string that contains the , or , or both.

    - Returns: A string that represents the , or , or both.

    */
    open override func ToString() throws -> dotnet.System.String {
        var __thrown : NullableHandle = nil;
        let __return = System_ComponentModel_Win32Exception_String__ToString_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return dotnet.System.String(hndl : __return);
        }
    }
    // [IsSpecialName] System.Int32 get_NativeErrorCode()
// docid: M:System.ComponentModel.Win32Exception.get_NativeErrorCode
    open func get_NativeErrorCode() throws -> Swift.Int32 {
        var __thrown : NullableHandle = nil;
        let __return = System_ComponentModel_Win32Exception_i32__get_NativeErrorCode_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return __return;
        }
    }
    /**
    Gets the Win32 error code associated with this exception.

    */
    open var NativeErrorCode : Swift.Int32 {
        get {
            return try! get_NativeErrorCode();
        }
    }
} // Win32Exception


}

