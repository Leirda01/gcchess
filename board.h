#ifndef __BOARD__H__
#define __BOARD__H__

#include "pieces.h"

typedef struct board {
  Piece* board[8][8];
}Board;

typedef enum range {
  a, b, c, d, e, f, g, h
}Range;

typedef struct coord {
  Range x, y;
}Coord;

Board move(Board board, Coord source, Coord dest);

#endif
