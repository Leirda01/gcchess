#include "stddef.h"
#include "board.h"

Board move(Board board, Square src, Square dest) {
  board.board[dest.x][dest.y] = board.board[src.x][src.y];
  board.board[src.x][src.y] = NULL;
  return board;
}

_Bool is_free(Board board, Square src) {
  return board.board[src.x][src.y] == NULL;
}
