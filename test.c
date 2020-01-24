#include <assert.h>
#include <stdio.h>
#include "board.h"
#include "pieces.h"

void assert_black_rook();
void assert_board_with_black_rook();
void assert_piece_move_to_free_square();
void assert_piece_move_to_occupied_square();

int main() {

  puts("");
  assert_black_rook();
  assert_board_with_black_rook();
  assert_piece_move_to_free_square();
  assert_piece_move_to_occupied_square();

  return 0;
}

void assert_piece_move_to_occupied_square() {
  printf("Declare a board with a rook on a8, a bishop on c5, then move rook to c5");

  Board board = {0};
  Piece black_rook = {black, rook};
  Piece white_bishop = {white, bishop};
  board.board[a][h] = &black_rook;
  board.board[c][e] = &white_bishop;
  Square src = {a, h}, dest = {c, e};
  board = move(board, src, dest);

  assert( !board.board[a][h] );
  assert( board.board[c][e] );
  assert( board.board[c][e]->color = black );
  assert( board.board[c][e]->color = rook );
  printf("\tOK.\n");
}
void assert_piece_move_to_free_square() {
  printf("Declare a board with a rook on a8, then move it to c5");

  Board board = {0};
  Piece black_rook = {black, rook};
  board.board[a][h] = &black_rook;
  Square src = {a, h}, dest = {c, e};
  board = move(board, src, dest);

  assert( !board.board[a][h] );
  assert( board.board[c][e] );
  assert( board.board[c][e]->color = black );
  assert( board.board[c][e]->color = rook );
  printf("\tOK.\n");
}
void assert_board_with_black_rook() {
  printf("Declare a board with a rook on a8");

  Board board = {0};
  Piece black_rook = {black, rook};
  board.board[a][h] = &black_rook;
  Square free_square = {c, e};
  Square occupied_square = {a, h};

  assert( is_free(board, free_square) );
  assert( !is_free(board, occupied_square) );
  assert( board.board[a][h] );
  assert( board.board[a][h]->color = black );
  assert( board.board[a][h]->name = rook );
  printf("\tOK.\n");
}
void assert_black_rook() {
  printf("Declare a black rook");

  Piece black_rook = {black, rook};

  assert( black_rook.color = black );
  assert( black_rook.name = rook );
  printf("\tOK.\n");
}
