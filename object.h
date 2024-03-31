#ifndef _OBJECT_H
#define _OBJECT_H

// board property
#define BOARD_X 10
#define BOARD_Y 20

#define BOARD_BG    ' '
#define BOARD_WALL  '#'
#define BOARD_BRICK 'O'

char board[BOARD_Y+2][BOARD_X+2];
void board_init();
void board_print();

// brick property
#define BRICK_MAX_FORM   7
#define BRICK_MAX_ROTATE 4
#define BRICK_Y          4
#define BRICK_X          4

extern int brick_x, brick_y;
extern int brick_form, brick_rotate;
char tetromino[7][4][4][4];
void brick_init();
void brick_print();
void brick_move(int x);




#endif