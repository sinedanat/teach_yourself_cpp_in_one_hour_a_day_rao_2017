// Declare an array that represents the squares on the chessboard.
// The type of the array being an enum that defines the pieces
// that may possibly occupy the squares.
// HINT: The enum will contain enumerators (Rook, Bishop, and so on),
// thereby limiting the range of possible values
// that the elements in the array can hold.
// Don’t forget that a cell may also be empty!

#include <iostream>

enum Pieces {Empty, King, Queen, Knight, Bishop, Rook, Pawn};

int main()
{
    Pieces board[8][8];
    board[0][0] = Rook;
    board[0][1] = Knight;

    std::cout << "board[0][0]: " << board[0][0] << std::endl;
    std::cout << "board[0][1]: " << board[0][1] << std::endl;

    return 0;
}

// board[0][0]: 5
// board[0][1]: 3
