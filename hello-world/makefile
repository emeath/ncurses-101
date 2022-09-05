all: hello_world

hello_world: hello_world.o
	g++ hello_world.o -o hello_world -lncurses

hello_world.o: hello_world.cpp
	g++ -c hello_world.cpp
       	
clean:
	rm -rf *.o
