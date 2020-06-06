# exemplo-googletest

- clonar repo do googletest dentro de lib/
https://github.com/google/googletest

## para compilar
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" 
make all
dentro de build/src - vai estar o binário do projeto original
dentro de build/tst - vai estar o binário dos testes unitários