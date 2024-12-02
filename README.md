## Build
### CMake
Minimum version required is 3.6.
```
https://github.com/Putrus/op-ut-example
cd op-ut-example
cmake -S . -B build # Default compiler
cmake -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -S -DCMAKE_BUILD_TYPE=Release -S . -B build # g++ compiler
cmake --build build
```

## Run
### example
```
build/example/example(.exe)
```
### example-test
```
ctest --test-dir build/example_test --output-on-failure

build/example_test/example_test(.exe)
```