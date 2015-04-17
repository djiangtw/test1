#include <curses.h>

int main(char argc, char** argv)
{
    int cc = 0xcc;
    initscr();
    raw();

    move(12, 13);
    printw("hello %.4x", cc);

    getch();
    endwin();

    return 0;
}
