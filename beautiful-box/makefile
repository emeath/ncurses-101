all: beautiful_box

beautiful_box: beautiful_box.o
	g++ beautiful_box.o -o beautiful_box -lncurses

beautiful_box.o: beautiful_box.cpp
	g++ -c beautiful_box.cpp
       	
clean:
	rm -rf *.o

