#include <stdio.h>
#include "pieces.h"
#include "board.h"

void test_pieces();
void test_board();
void test_move();

int main() {

  puts("\n============§============\n");
  test_pieces();
  puts("");
  test_board();
  puts("");

  return 0;
}

void test_move() {

  return;
}
void test_board() {
  printf("declare board with black rook on a8\n");
  Board board = {0};
  Piece black_rook = {black, rook};
  board.board[a][7] = &black_rook;

  printf("%p should be nil (b2 empty)\n", board.board[1][1]);
  printf("%p should'nt be nil (a8 occupied)\n", board.board[a][7]);
  printf("%d should be 1 (black on a8)\n", board.board[a][7]->color);
  printf("%d should be 3 (rook on a8)\n", board.board[a][7]->name);
  printf("%p should be nil (c5 empty)\n", board.board[c][4]);

  return;
}
void test_pieces() {
  printf("declare a black rook\n");
  Piece black_rook = {black, rook};
  printf("%d should be 1 (black)\n", black_rook.color);
  printf("%d should be 3 (rook)\n", black_rook.name);

  return;
}
