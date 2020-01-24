#include "stddef.h"
#include "board.h"

Board move(Board board, Coord source, Coord dest) {
  board.board[dest.x][dest.y] = board.board[source.x][source.y];
  board.board[source.x][source.y] = NULL;
  return board;
}
