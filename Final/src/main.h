#ifndef _MAINGUARD
#define _MAINGUARD

// Define Booleans
#define false 0
#define true 1
#define False 0
#define True 1
#define FALSE 0
#define TRUE 1

// Set Colours
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

// Min/Max Functions
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

// Numbers
#define INFINITY 2147483647
#define NEG_INFINITY -2147483647

// Import Important Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

// Import Utils
#include "utils/math.c"
#include "utils/stack.c"
#include "utils/convert.c"
#include "utils/queue.c"
#include "utils/tree.c"
#include "utils/helpers.c"

/* Clear command
 * Windows: cls
 * Everything else: clear
 */ 

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif





// Import Graphics
// TODO - Add when done
// #include "utils/graphics.c"

#endif // _MAINGUARD

//ignore this