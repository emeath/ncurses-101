#include <ncurses.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;


void init_terminal_color() {

	if(!has_colors()) {
		printw("Sorry no colors for you! Your terminal doesn't support colors =(");
		getch();
		exit(1);
	}
	srand(time(0));
	start_color();
	init_pair(1, rand() % 9, rand() % 9);
	init_pair(2, rand() % 9, rand() % 9);
	init_pair(3, rand() % 9, rand() % 9);
	init_pair(4, rand() % 9, rand() % 9);
	init_pair(5, rand() % 9, rand() % 9);
	init_pair(6, rand() % 9, rand() % 9);
	init_pair(7, rand() % 9, rand() % 9);
	init_pair(8, rand() % 9, rand() % 9);
	init_pair(9, rand() % 9, rand() % 9);
}

void print_with_color(const char* text, short pair_number) {
	attron(COLOR_PAIR(pair_number));
	printw(text);
	attroff(COLOR_PAIR(pair_number));
}

void print_hello_world() {

	for(int i = 0; i < 42; i++) {
		move(rand() % 60, rand() % 190);
		print_with_color("Hello World!", i % 9 + 1);
	}

}

int main(int argc, char** argv) {
	// init the screen
	// sets up memory and cleares the screen
	initscr();

	init_terminal_color();

	int x, y;
	x = y = 10;

	//moves the cursor to the specified location
	move(y, x);

	// prints a string (const char* ) to a window
	printw("Hello World!");


	print_hello_world();

	move(20, 30);
	print_with_color("Hello World!", 1);

	move(30, 20);
	print_with_color("Hello Worlds!", 2);

	move(10, 40);
	print_with_color("Hello World!", 3);
	
	// refreshes the screen to match whats in memory
	refresh();

	// whats for user input, returns int value of that key
	int c = getch();

	printw("%d", c);
	
	// moves and than prints
	mvprintw(15, 15, "hi!!!", NULL);

	// clears the screen
	clear();

	getch();

	// deallocates memory and ends ncurses
	endwin();
	
	return 0;
}
