gcc -c -Wall -fPIC -o list.o list.c
gcc -shared -o liblist.so list.o
gcc -Wall use_list.c -o use_list -L. -llist -lm
./use_list