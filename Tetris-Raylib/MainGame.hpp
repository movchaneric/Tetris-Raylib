//
//  MainGame.hpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 27/07/2023.
//

#ifndef MainGame_hpp
#define MainGame_hpp

#include <stdio.h>
#include <vector>
#include "Grid.hpp"
#include "Block.hpp"
#include "GamePieces.cpp"


class MainGame{
public:
    MainGame();
    
    Grid* gameGrid;
    
    std::vector<Block> getAllGameBlocks();
    Block getRandomBlock();
    void drawGame();
    
    //User handle methods
    void handleUserAction();
    void moveBlockDown();
    void moveBlockRight();
    void moveBlockLeft();
    bool isBlockOutOfGrid();

private:
    Block currentBlock;
    std::vector<Block> gameBlocks;
    
    
};

#endif /* MainGame_hpp */
