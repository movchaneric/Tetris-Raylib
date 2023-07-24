
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
private:
    int** grid;
    int numOfRows;
    int numOfCols;
    int cellSize;
    std::vector<const Color*> colors;
};

#endif /* Grid_hpp */
