/*  main.cpp | Still 'recording' and 'importing'. */

import Treasure;

int
main(
  int argc, 
  const char * argv[]
)
{
   print();
   return 0;
}

/*
 xcrun clang -std=c++2a -fmodules-ts -c mydetail-1.cpp -o mydetail-1.pct
 xcrun clang -std=c++2a -fmodules-ts -fprebuilt-module-path=.                \
  -fmodules-user-build-path=. -fmodule-file=mydetail-1.pct                   \
  -fmodule-map-file=To-c++.modules -o Satinables mydetail-1.pct main.cpp
*/

