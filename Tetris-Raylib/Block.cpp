//
//  Block.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 24/07/2023.
//

#include "Block.hpp"

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    colors = getColors();
    offsetRow = 0;
    offsetCol = 0;
}


std::vector<Position> Block::getRecentBlockPosition(){
    std::vector<Position> blockPosition = cells[rotationState];
    
    std::vector<Position> updatedBlockPosition;
    
    for(Position& pos: blockPosition){
        Position newPos = Position(pos.row + offsetRow, pos.col + offsetCol);
        updatedBlockPosition.push_back(newPos);
    }
    
    return updatedBlockPosition;
}

void Block::drawBlock(int offsetRow, int offsetCol){
    std::vector<Position> recentPos = getRecentBlockPosition();
    
    for(Position block: recentPos){
        DrawRectangle((block.col + offsetCol) * cellSize, (block.row + offsetRow) * cellSize  , cellSize - 1, cellSize - 1, colors[blockId]);
    }
}

void Block::moveBlock(int addRow, int addCol){
    offsetRow += addRow;
    offsetCol += addCol;
    ;
}

