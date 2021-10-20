objects = main.o BST.o
CXXFLAGS := -g -Wall -std=c++17

main : $(objects)
	$(CXXFLAGS) -o main.out $(objects)
	make clean

main: BST.o
BST.o: BST.hpp

.PHONY : clean
clean :
	-rm $(objects)