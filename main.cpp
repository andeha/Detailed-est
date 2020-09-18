/*  main.cpp | Countinous 'recording' and 'importing'. */

import Treasure;
#include <cstdio>

int
main(
  int argc, 
  const char * argv[]
)
{
   int x=print3(), y=Silver();
   printf("x is %d and y is %d\n",x,y);
   return 0;
}

/*  Requires explicit module:
 
 clang -std=c++2a treasure.cpp -c -Xclang -emit-module-interface -fmodules-ts \
   -o tmp/mydetail-1.pcm
 clang -std=c++2a -fmodules-ts -c tmp/mydetail-1.pcm -o mydetail-1.o
 clang -std=c++2a -fmodules-ts -c treasure.cpp -emit-llvm -S -o treasure.i 
 ar rcs library.a mydetail-1.o
 
 clang -std=c++2a -fmodules-ts -fimplicit-modules                             \
   -fmodule-map-file=To-c++.modules main.cpp library.a
 
 alt.
 
 clang -std=c++2a -fmodules-ts -fmodule-file=tmp/mydetail-1.pcm main.cpp library.a
 
 */


