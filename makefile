objects = main.o BST.o
CC = clang++ -g -Wall -std=c++17

main : $(objects)
	$(CC) -o main.out $(objects)
	make clean

BST.o:
	clang++ -c -g -std=c++17 -o BST.o BST.hpp

main.o:
	clang++ -c -g -std=c++17 -o main.o main.cpp

.PHONY : clean
clean :
	-rm $(objects)