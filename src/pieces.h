#ifndef __PIECES__H__
#define __PIECES__H__

typedef enum piece_name {
  pawn, knight, bishop, rook, queen, king
}Piece_name;

typedef enum piece_color {
  white, black
}Piece_color;

typedef struct piece {
  Piece_color color;
  Piece_name name;
}Piece;

#endif
