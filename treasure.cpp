/* treasure.cpp - Nuggets aligned? */

/* #define EXPLICIT_MODULE */
#define IMPLICIT_MODULE

#ifdef IMPLICIT_MODULE
/* xcrun clang -std=c++2a -fmodules-ts -fmodule-map-file=To-c++.modules -o mydetail-1.pct -c treasure.cpp -Xclang -emit-module */
#elif defined EXPLICIT_MODULE
export module Treasure;
export int print(); /* explicit module. */
/* xcrun clang -std=c++2a -fmodules-ts -o mydetail-1.pct -c treasure.cpp -Xclang -emit-module-interface */
#else
#warning "Neither explicit nor implicit module selected."
#endif

#include <stdio.h> /* ⬷ Snaphotted in a 'pre-compiled header'-similar. */
int print() { return printf("Called ::print() residing in a module.\n"); }

/* -fno-implicit-module-maps -fbuiltin-module-map */
/* clang -module-file-info mydetail-1.pcm */
