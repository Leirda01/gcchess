#ifndef __BOARD__H__
#define __BOARD__H__

#include "pieces.h"

typedef struct board {
  Piece* board[8][8];
}Board;

typedef enum range {
  a, b, c, d, e, f, g, h
}Range;

typedef struct square {
  Range x, y;
}Square;

_Bool is_free(Board board, Square src);
Board move(Board board, Square src, Square dest);

#endif
