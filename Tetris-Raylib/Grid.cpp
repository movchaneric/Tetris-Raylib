//
//  Grid.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 23/07/2023.
//

#include "Grid.hpp"

Grid::Grid(){
    cellSize = 30;
    numOfRows = 20;
    numOfCols = 10;
    grid = new int*[numOfRows];
}


void Grid::gridInit(){
    for(int row = 0; row < numOfRows; row++){
        grid[row] = new int[numOfCols];
    }
}

void Grid::drawGrid(){
    for(int row = 0; row < numOfRows; row++){
        for(int col = 0; col < numOfCols; col++){
            DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, GRAY);
        }
    }
}

void Grid::printGrid(){
    for(int row = 0; row < numOfRows; row++){
        for (int col = 0; col < numOfCols; col++) {
            std::cout << (grid[row][col]) << " ";
        }
        std::cout << std::endl;
    }
}