#include <ncurses.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	// initializes the screen
	// sets up memory and clears the screen
	//
	initscr();
	int height, width, start_y, start_x;
	height = 20;
	width = 40;
	start_y = start_x = 10; // line 10 not pixel

	WINDOW* win = newwin(height, width, start_y, start_x);
	refresh(); // so the 'newwin' will be known

	box(win, 0, 0);
	mvwprintw(win, 3, 3, "Look at this beautiful box!");
	wrefresh(win);

	getch(); // waits for input so we can see the program

	// deallocates memory and ends ncurses
	endwin();
	
	return 0;
}
