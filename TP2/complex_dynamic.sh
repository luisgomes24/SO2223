gcc -c -Wall -fPIC -o complex.o complex.c
gcc -shared -o libcomplex.so complex.o
gcc -Wall use_complex.c -o use_complex -L. -lcomplex -lm
./use_complex