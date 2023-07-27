#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <raylib.h>
#include "Position.hpp"
#include "Grid.hpp"
#include "Colors.hpp"

class Block
{
public:
    Block();
    int blockId, rotationState;
    int offsetRow, offsetCol;
    std::map<int, std::vector<Position>> cells;
    
    void drawBlock(int row, int col);
    void moveBlock(int addX, int addY);
    std::vector<Position> getRecentBlockPosition();
    
private:
    int cellSize;
    std::vector<const Color> colors;
    
};

#endif /* Block_hpp */
