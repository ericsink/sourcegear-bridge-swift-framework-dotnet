// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#include "System_Runtime_Handles.h"

extern void (*_sg_resolve_jumptable)(const char*, int, void*);

struct {
} _g_System_Runtime_Handles;

static void my_init() {
    _sg_resolve_jumptable("System_Runtime_Handles", 22, &_g_System_Runtime_Handles);
}

