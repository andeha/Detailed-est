Type:

```
mkdir tmp 
clang -std=c++2a treasure.cpp -c -Xclang -emit-module-interface         \
  -fmodules-ts -o tmp/mydetail-1.pcm
clang -std=c++2a -fmodules-ts -c tmp/mydetail-1.pcm -o mydetail-1.o
clang -std=c++2a -fmodules-ts -c treasure.cpp -emit-llvm -S -o treasure.i 
ar rcs library.a mydetail-1.o
clang -std=c++2a -fmodules-ts -fimplicit-modules                        \
  -fmodule-map-file=To-c++.modules main.cpp library.a
```
