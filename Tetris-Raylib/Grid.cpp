#include "Grid.hpp"
#include "Colors.hpp"

Grid::Grid(){
    cellSize = 30;
    numOfRows = 20;
    numOfCols = 10;
    
    gridInit();
    
    colors = getColors();
}

//Deaclote memoery allocated for grid
Grid::~Grid(){
    freeGrid();
}

void Grid::freeGrid(){
    if(grid != nullptr){
        for(int row = 0; row < numOfRows; row++){
            delete[] grid[row];
        }
        delete[] grid;
    }
}

void Grid::gridInit(){
    grid = new int*[numOfRows];
    
    for(int row = 0; row < numOfRows; row++){
        grid[row] = new int[numOfCols];
    }
}

void Grid::drawGrid(){
    for(int row = 0; row < numOfRows; row++){
        for(int col = 0; col < numOfCols; col++){
            int blockValue = grid[row][col];
            DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[blockValue]);
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

bool Grid::cellOutOfGrid(int row, int col){
    //cell is inside the grid
    if(row >= 0 && row < numOfRows && col >= 0 && col < numOfCols){
        return false;
    }
    return true;
}
