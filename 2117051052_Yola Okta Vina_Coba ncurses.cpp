#include <ncurses.h>
using namespace std;

int main(){
	initscr();
	char a;
	printw("a");
	refresh();
	getch();
	endwin();
	
	return 0;
}
