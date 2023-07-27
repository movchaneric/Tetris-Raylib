
#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>
#include <raylib.h>
#include <iostream>

class Grid {
public:
    Grid();
    ~Grid();
    
    void drawGrid();
    void gridInit();
    void printGrid();
    void freeGrid();
    bool cellOutOfGrid(int row, int col);
    bool cellIsFree(int row, int col);

    int** grid;
    
private:
    int numOfRows;
    int numOfCols;
    int cellSize;
    std::vector<const Color> colors;
};

#endif /* Grid_hpp */
