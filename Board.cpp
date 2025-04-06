#include "Board.h"
#include <iostream>

Board::Board() {
    for (int i = 0; i < BOARD_HEIGHT; ++i) {
        for (int j = 0; j < BOARD_WIDTH; ++j) {
            grid[i][j] = ' '; // Remplir avec des cases vides
        }
    }
}

void Board::draw() const {
    std::cout << "+----------+" << std::endl;
    for (int i = 0; i < BOARD_HEIGHT; ++i) {
        std::cout << "|";
        for (int j = 0; j < BOARD_WIDTH; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "+----------+" << std::endl;
}
