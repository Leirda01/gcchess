#include <assert.h>
#include <stdio.h>
#include "board.h"
#include "pieces.h"

void black_rook();
void board_with_black_rook();
void piece_move_to_free_square();
void piece_move_to_occupied_square();

int main() {

  puts("");
  black_rook();
  board_with_black_rook();
  piece_move_to_free_square();
  piece_move_to_occupied_square();

  return 0;
}

void piece_move_to_occupied_square() {
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

void piece_move_to_free_square() {
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

void board_with_black_rook() {
  printf("Declare a board with a rook on a8");

  Board board = {0};
  Piece black_rook = {black, rook};
  board.board[a][h] = &black_rook;
  Square free_square = {c, e};
  Square occupied_square = {a, h};

  assert( !get_square(board, str_to_square("c5")) );
  assert( get_square(board, str_to_square("a8")) );
  assert( board.board[a][h]->color = black );
  assert( board.board[a][h]->name = rook );
  printf("\tOK.\n");
}

void black_rook() {
  printf("Declare a black rook");

  Piece black_rook = {black, rook};

  assert( black_rook.color = black );
  assert( black_rook.name = rook );
  printf("\tOK.\n");
}
