#include <ncurses.h>
#include "main.h"

 
#define LENGTH 35
#define HEIGTH 15

// ncurses key
#define K_DOWN 258
#define K_UP 259
#define K_LEFT 260
#define K_RIGHT 261
#define K_ENTER 10



int main(void) 
{
     
    WINDOW *w;
    int ch, i = 0, width = 7;
    char items[6][20] = {"Calc (DEC)", "Calc (BIN)", "Calc (HEX)", "Calc (AST)", "Slots", "Slots (INFINITE)"};
    int len = 6; 
 
    initscr(); // initialize Ncurses
    w = newwin( HEIGTH, LENGTH, 0, 20 ); // create a new window
    box( w, 0, 0 ); // sets default borders for the window
    keypad(stdscr, TRUE);

    while(1)
    {
        ch = getch();        
        if (ch == K_UP)
        {
            i--;
            if (i<0){i=len;}
        } else if (ch==K_DOWN) {
            i++;
            if (i>=len){i=0;}
        }

        for (int j = 0; j < len; j++)
        {
            if (j == i )
            {
                wattron(w, A_STANDOUT);
            } else {
                wattroff(w, A_STANDOUT);
            }
            mvwprintw(w, j + 1, 2, "%s", items[j]);
        }
        wrefresh(w);

        if (ch == K_ENTER)
        {
            break;
        }

    }

 
    delwin(w);
    endwin();


    // create exec files
    system("cc calc.c -o calc");
    system("cc slots.c -o slots");


    // Iterates over options
    if (strncmp(items[i], "Calc (DEC)", 20) == 0) {
        system("./calc DEC");
        return 0;
    } else if (strncmp(items[i], "Calc (BIN)", 20) == 0) {
        system("./calc BIN");
        return 0;
    } else if (strncmp(items[i], "Calc (HEX)", 20) == 0) {
        system("./calc HEX");
        return 0;
    } else if (strncmp(items[i], "Calc (AST)", 20) == 0) {
        system("./calc AST");
        return 0;
    } else if (strncmp(items[i], "Slots", 20) == 0) {
        system("./slots");
        return 0;
    } else if (strncmp(items[i], "Calc (BIN)", 20) == 0) {
        system("./slots INF");
        return 0;
    }






}