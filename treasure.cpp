/*  treasure.cpp - Nuggets aligned? */

#include <stdio.h>

export module Treasure;

#include "treasure.ixx" /* export print */

extern "C" int print₁() { printf("Called ::print₁() residing in a module.\n"); return 1; }
int print₂() { printf("Called ::print₂() residing in a module.\n"); return 1; }
int print3() { printf("Called ::print3() residing in a module.\n"); return 1; }
