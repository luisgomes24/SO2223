gcc -Wall -c complex.c
ar -rc libcomplex.a complex.o
ar -t libcomplex.a
gcc -Wall use_complex.c -o use_complex -L. -lcomplex -lm