// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#include "WindowsBase.h"

extern void (*_sg_resolve_jumptable)(const char*, int, void*);

struct {
} _g_WindowsBase;

static void my_init() {
    _sg_resolve_jumptable("WindowsBase", 11, &_g_WindowsBase);
}
