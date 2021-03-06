// this file is automatically generated
// Copyright 2021 SourceGear

import jumptable_dotnet;

// System
extension System {
// type: System.IServiceProvider
    /**
    Defines a mechanism for retrieving a service object; that is, an object that provides custom support to other objects.

    */
open class IServiceProvider
    :
    SGBridgeGenericValue,
    System_IServiceProvider
{
    open class func get_type_handle() -> TypeHandle {
        return System_IServiceProvider_get_type_handle();
    }
    let h : NonnullHandle;
    public func to_gval() -> GVal { return GVal(Swift.Int(bitPattern: self.h)); }
    public func dup_gval() -> GVal { return GVal(Swift.Int(bitPattern: __copy_handle(self.h))); }
    public required init(gval: GVal) { self.h = NonnullHandle(bitPattern: Swift.Int(truncatingIfNeeded: gval))!; }
    public required init(hndl: NonnullHandle) { self.h = hndl; }
    public func get_handle() -> NonnullHandle { return self.h; }

    deinit { __drop_handle(self.h); }

    // System.Object GetService(System.Type)
// docid: M:System.IServiceProvider.GetService(System.Type)
    /**
    Gets the service object of the specified type.

    - Parameter serviceType: An object that specifies the type of service object to get.
    - Returns: A service object of type .  
  
 -or-  
  
  if there is no service object of type .

    */
    open func GetService(serviceType : dotnet.System.Type_) throws -> Optional<dotnet.System.Object> {
        var __thrown : NullableHandle = nil;
        let __return = System_IServiceProvider_Object__GetService_0__1__Type(&__thrown, self.get_handle(), serviceType.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        if let __ret_unwrapped = __return {
            return dotnet.System.Object(hndl : __ret_unwrapped);
        } else {
            return nil;
        }
        }
    }
} // IServiceProvider


}
// System.ComponentModel
extension System.ComponentModel {
// type: System.ComponentModel.CancelEventArgs
    /**
    Provides data for a cancelable event.

    */
open class CancelEventArgs
    :
    dotnet.System.EventArgs
{
    open class override func get_type_handle() -> TypeHandle {
        return System_ComponentModel_CancelEventArgs_get_type_handle();
    }
    public required init(hndl: NonnullHandle) { super.init(hndl: hndl); }
    public required init(gval: GVal) { super.init(gval: gval); }
    // .ctor()
// docid: M:System.ComponentModel.CancelEventArgs.#ctor
    /**
    Initializes a new instance of the  class with the  property set to .

    */
    public override init() throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_CancelEventArgs_ctor_0__0(&__thrown);
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // .ctor(bool)
// docid: M:System.ComponentModel.CancelEventArgs.#ctor(System.Boolean)
    /**
    Initializes a new instance of the  class with the  property set to the given value.

    - Parameter cancel: 
         to cancel the event; otherwise, .
    */
    public init(cancel : Bool) throws {
        var __thrown : NullableHandle = nil;
        let h = System_ComponentModel_CancelEventArgs_ctor_0__1__bool(&__thrown, Swift.Int32(cancel ? 1 : 0));
        if let __ex = __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            super.init(hndl: h);
        }
    }
    // [IsSpecialName] bool get_Cancel()
// docid: M:System.ComponentModel.CancelEventArgs.get_Cancel
    open func get_Cancel() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_ComponentModel_CancelEventArgs_bool__get_Cancel_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
    // [IsSpecialName] void set_Cancel(bool)
// docid: M:System.ComponentModel.CancelEventArgs.set_Cancel(System.Boolean)
    open func set_Cancel(value : Bool) throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_CancelEventArgs_void__set_Cancel_0__1__bool(&__thrown, self.get_handle(), Swift.Int32(value ? 1 : 0));
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    /**
    Gets or sets a value indicating whether the event should be canceled.

    */
    open var Cancel : Bool {
        get {
            return try! get_Cancel();
        }
        set(v) {
            return try! set_Cancel(value: v);
        }
    }
} // CancelEventArgs


// type: System.ComponentModel.IChangeTracking
    /**
    Defines the mechanism for querying the object for changes and resetting of the changed status.

    */
open class IChangeTracking
    :
    SGBridgeGenericValue,
    System_ComponentModel_IChangeTracking
{
    open class func get_type_handle() -> TypeHandle {
        return System_ComponentModel_IChangeTracking_get_type_handle();
    }
    let h : NonnullHandle;
    public func to_gval() -> GVal { return GVal(Swift.Int(bitPattern: self.h)); }
    public func dup_gval() -> GVal { return GVal(Swift.Int(bitPattern: __copy_handle(self.h))); }
    public required init(gval: GVal) { self.h = NonnullHandle(bitPattern: Swift.Int(truncatingIfNeeded: gval))!; }
    public required init(hndl: NonnullHandle) { self.h = hndl; }
    public func get_handle() -> NonnullHandle { return self.h; }

    deinit { __drop_handle(self.h); }

    // void AcceptChanges()
// docid: M:System.ComponentModel.IChangeTracking.AcceptChanges
    /**
    Resets the object's state to unchanged by accepting the modifications.

    */
    open func AcceptChanges() throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_IChangeTracking_void__AcceptChanges_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // [IsSpecialName] bool get_IsChanged()
// docid: M:System.ComponentModel.IChangeTracking.get_IsChanged
    open func get_IsChanged() throws -> Bool {
        var __thrown : NullableHandle = nil;
        let __return = System_ComponentModel_IChangeTracking_bool__get_IsChanged_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
        return (__return) != 0;
        }
    }
} // IChangeTracking


// type: System.ComponentModel.IEditableObject
    /**
    Provides functionality to commit or rollback changes to an object that is used as a data source.

    */
open class IEditableObject
    :
    SGBridgeGenericValue,
    System_ComponentModel_IEditableObject
{
    open class func get_type_handle() -> TypeHandle {
        return System_ComponentModel_IEditableObject_get_type_handle();
    }
    let h : NonnullHandle;
    public func to_gval() -> GVal { return GVal(Swift.Int(bitPattern: self.h)); }
    public func dup_gval() -> GVal { return GVal(Swift.Int(bitPattern: __copy_handle(self.h))); }
    public required init(gval: GVal) { self.h = NonnullHandle(bitPattern: Swift.Int(truncatingIfNeeded: gval))!; }
    public required init(hndl: NonnullHandle) { self.h = hndl; }
    public func get_handle() -> NonnullHandle { return self.h; }

    deinit { __drop_handle(self.h); }

    // void BeginEdit()
// docid: M:System.ComponentModel.IEditableObject.BeginEdit
    /**
    Begins an edit on an object.

    */
    open func BeginEdit() throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_IEditableObject_void__BeginEdit_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // void CancelEdit()
// docid: M:System.ComponentModel.IEditableObject.CancelEdit
    /**
    Discards changes since the last  call.

    */
    open func CancelEdit() throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_IEditableObject_void__CancelEdit_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
    // void EndEdit()
// docid: M:System.ComponentModel.IEditableObject.EndEdit
    /**
    Pushes changes since the last  or  call into the underlying object.

    */
    open func EndEdit() throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_IEditableObject_void__EndEdit_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
} // IEditableObject


// type: System.ComponentModel.IRevertibleChangeTracking
    /**
    Provides support for rolling back the changes.

    */
open class IRevertibleChangeTracking
    :
    SGBridgeGenericValue,
    System_ComponentModel_IRevertibleChangeTracking,
    System_ComponentModel_IChangeTracking
{
    open class func get_type_handle() -> TypeHandle {
        return System_ComponentModel_IRevertibleChangeTracking_get_type_handle();
    }
    let h : NonnullHandle;
    public func to_gval() -> GVal { return GVal(Swift.Int(bitPattern: self.h)); }
    public func dup_gval() -> GVal { return GVal(Swift.Int(bitPattern: __copy_handle(self.h))); }
    public required init(gval: GVal) { self.h = NonnullHandle(bitPattern: Swift.Int(truncatingIfNeeded: gval))!; }
    public required init(hndl: NonnullHandle) { self.h = hndl; }
    public func get_handle() -> NonnullHandle { return self.h; }

    deinit { __drop_handle(self.h); }

    // void RejectChanges()
// docid: M:System.ComponentModel.IRevertibleChangeTracking.RejectChanges
    /**
    Resets the object's state to unchanged by rejecting the modifications.

    */
    open func RejectChanges() throws {
        var __thrown : NullableHandle = nil;
        System_ComponentModel_IRevertibleChangeTracking_void__RejectChanges_0__0(&__thrown, self.get_handle());
        if let __ex =  __thrown {
            throw dotnet.System.Exception(hndl: __ex);
        } else {
            return;
        }
    }
} // IRevertibleChangeTracking


}


public protocol System_ComponentModel_IChangeTracking
    :
    SGBridgeGetHandle
{
}

public protocol System_ComponentModel_IEditableObject
    :
    SGBridgeGetHandle
{
}

public protocol System_ComponentModel_IRevertibleChangeTracking
    :
    System_ComponentModel_IChangeTracking
{
}

public protocol System_IServiceProvider
    :
    SGBridgeGetHandle
{
}

