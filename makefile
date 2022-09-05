all: hi

hi: hi.o
	g++ hi.o -o hi -lncurses

hi.o: hi.cpp
	g++ -c hi.cpp
       	
clean:
	rm -rf *.o

