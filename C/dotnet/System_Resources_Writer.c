// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#include "System_Resources_Writer.h"

extern void (*_sg_resolve_jumptable)(const char*, int, void*);

struct {
    TYP (* _Nonnull  _fp_System_Resources_IResourceWriter_get_type_handle)(void);
    void (* _Nonnull  _fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_Object)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_String)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_IResourceWriter_void__Close_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Resources_IResourceWriter_void__Generate_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Resources_IResourceWriter_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_Resources_ResourceWriter_get_type_handle)(void);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Resources_ResourceWriter_ctor_0__1__Stream)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Resources_ResourceWriter_ctor_0__1__String)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL fileName);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_u8Array)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Stream)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResource_0__3__String_Stream_bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value, int32_t closeAfterWrite);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Object)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_String)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__AddResourceData_0__3__String_String_u8Array)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NONNULL typeName, SG_HNDL_NONNULL serializedData);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__Close_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__Dispose_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__Generate_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_Resources_ResourceWriter_System_Func_System_Type_string___get_TypeNameConverter_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_Resources_ResourceWriter_void__set_TypeNameConverter_0__1__System_Func_System_Type_string_)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_Resources_ResourceWriter_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
} _g_System_Resources_Writer;

static void my_init() {
    _sg_resolve_jumptable("System_Resources_Writer", 23, &_g_System_Resources_Writer);
}

TYP System_Resources_IResourceWriter_get_type_handle(void) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_get_type_handle();
    return ret;
}

void System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_u8Array(__thrown, __self_h, name, value);
}

void System_Resources_IResourceWriter_void__AddResource_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_Object) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_Object(__thrown, __self_h, name, value);
}

void System_Resources_IResourceWriter_void__AddResource_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_String) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__AddResource_0__2__String_String(__thrown, __self_h, name, value);
}

void System_Resources_IResourceWriter_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__Close_0__0) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__Close_0__0(__thrown, __self_h);
}

void System_Resources_IResourceWriter_void__Generate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__Generate_0__0) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_void__Generate_0__0(__thrown, __self_h);
}

SG_HNDL_NONNULL System_Resources_IResourceWriter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_IResourceWriter_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Resources_Writer._fp_System_Resources_IResourceWriter_cast(__thrown, __h);
    return ret;
}

TYP System_Resources_ResourceWriter_get_type_handle(void) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_get_type_handle();
    return ret;
}

SG_HNDL_NONNULL System_Resources_ResourceWriter_ctor_0__1__Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_ctor_0__1__Stream) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_ctor_0__1__Stream(__thrown, stream);
    return ret;
}

SG_HNDL_NONNULL System_Resources_ResourceWriter_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL fileName) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_ctor_0__1__String) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_ctor_0__1__String(__thrown, fileName);
    return ret;
}

void System_Resources_ResourceWriter_void__AddResource_0__2__String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_u8Array) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_u8Array(__thrown, __self_h, name, value);
}

void System_Resources_ResourceWriter_void__AddResource_0__2__String_Stream(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Stream) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Stream(__thrown, __self_h, name, value);
}

void System_Resources_ResourceWriter_void__AddResource_0__3__String_Stream_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value, int32_t closeAfterWrite) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__3__String_Stream_bool) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__3__String_Stream_bool(__thrown, __self_h, name, value, closeAfterWrite);
}

void System_Resources_ResourceWriter_void__AddResource_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Object) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_Object(__thrown, __self_h, name, value);
}

void System_Resources_ResourceWriter_void__AddResource_0__2__String_String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_String) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResource_0__2__String_String(__thrown, __self_h, name, value);
}

void System_Resources_ResourceWriter_void__AddResourceData_0__3__String_String_u8Array(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL name, SG_HNDL_NONNULL typeName, SG_HNDL_NONNULL serializedData) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResourceData_0__3__String_String_u8Array) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__AddResourceData_0__3__String_String_u8Array(__thrown, __self_h, name, typeName, serializedData);
}

void System_Resources_ResourceWriter_void__Close_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Close_0__0) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Close_0__0(__thrown, __self_h);
}

void System_Resources_ResourceWriter_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Dispose_0__0) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Dispose_0__0(__thrown, __self_h);
}

void System_Resources_ResourceWriter_void__Generate_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Generate_0__0) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__Generate_0__0(__thrown, __self_h);
}

SG_HNDL_NULLABLE System_Resources_ResourceWriter_System_Func_System_Type_string___get_TypeNameConverter_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_System_Func_System_Type_string___get_TypeNameConverter_0__0) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_System_Func_System_Type_string___get_TypeNameConverter_0__0(__thrown, __self_h);
    return ret;
}

void System_Resources_ResourceWriter_void__set_TypeNameConverter_0__1__System_Func_System_Type_string_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__set_TypeNameConverter_0__1__System_Func_System_Type_string_) {
        my_init();
    }
    _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_void__set_TypeNameConverter_0__1__System_Func_System_Type_string_(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_Resources_ResourceWriter_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_Resources_Writer._fp_System_Resources_ResourceWriter_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_Resources_Writer._fp_System_Resources_ResourceWriter_cast(__thrown, __h);
    return ret;
}

