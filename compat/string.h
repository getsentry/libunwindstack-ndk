// Compat header for missing `basename`

#pragma once

#include <string.h>

const char *
basename(const char *s)
{
    const char *c = strrchr(s, '/');
    return c ? c + 1 : s;
}