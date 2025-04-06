#ifndef BOARD_H
#define BOARD_H

const int BOARD_WIDTH = 10;
const int BOARD_HEIGHT = 20;

class Board {
private:
    char grid[BOARD_HEIGHT][BOARD_WIDTH]; // Tableau à 2 dimensions

public:
    Board(); // Constructeur
    void draw() const;
};

#endif
