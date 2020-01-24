#include "stddef.h"
#include "board.h"

Board move(Board board, Square src, Square dest) {
  board.board[dest.x][dest.y] = board.board[src.x][src.y];
  board.board[src.x][src.y] = NULL;
  return board;
}

Board set_square(Board board, Piece piece, Square dest) {
}

Piece* get_square(Board board, Square src) {
  return board.board[src.x][src.y];
}

Square str_to_square(char str[2]) {
  Square square = { str[0] - 'a', str[1] - '1'};
  return square;
}
