gcc -c -Wall -fPIC -o complex6.o complex6.c
gcc -shared -o libcomplex6.so complex6.o
gcc -Wall use_complex6.c -o use_complex6 -L. -lcomplex6 -lm
./use_complex6