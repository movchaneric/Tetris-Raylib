//
//  MainGame.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 27/07/2023.
//

#include "MainGame.hpp"
#include <random>

MainGame::MainGame(){
    gameGrid =  new Grid();
    gameBlocks = getAllGameBlocks();
    
    currentBlock = getRandomBlock();
}


std::vector<Block> MainGame::getAllGameBlocks(){
    return {LBlock(), JShapeBlock(), IShapeBlock(), OShapeBlock(), SShapeBlock(), TShapeBlock(), ZShapeBlock()};
}

Block MainGame::getRandomBlock(){
    //Check for empty list after using all blocks, Reload
    if(gameBlocks.empty()){
        gameBlocks = getAllGameBlocks();
    }
    
    //TODO: Not generating random index properly
    int randBlockIndex = rand() % gameBlocks.size();
    
    Block randBlock = gameBlocks[randBlockIndex];
    
    //remove one element from gameBlocks
    gameBlocks.erase(gameBlocks.begin() + randBlockIndex);
    
    return randBlock;
}

bool MainGame::isBlockOutOfGrid(){
    std::vector<Position> blockPosition = currentBlock.getRecentBlockPosition();
    
    for(Position pos: blockPosition){
        if(gameGrid -> cellOutOfGrid(pos.row, pos.col)){
            std::cout << "out of grid" << std::endl;
            return true;
        }
        
    }
    return false;
}


void MainGame::drawGame(){
    gameGrid -> drawGrid();
    currentBlock.drawBlock(0, 0);
}

void MainGame::handleUserAction(){
    int keyPressed = GetKeyPressed();

    switch(keyPressed){
        case KEY_DOWN:
            moveBlockDown();
            break;
        
        case KEY_RIGHT:
            moveBlockRight();
            break;
        
        case KEY_LEFT:
            moveBlockLeft();
            break;
        
        default:
            break;
    }
}


void MainGame::moveBlockDown(){
    currentBlock.moveBlock(1, 0);
    
    //check if block in grid
    if(isBlockOutOfGrid()){
        currentBlock.moveBlock(-1, 0);
    }

}

void MainGame::moveBlockRight(){
    currentBlock.moveBlock(0, 1);
    if(isBlockOutOfGrid()){
        currentBlock.moveBlock(0, -1);
    }
}

void MainGame::moveBlockLeft(){
    currentBlock.moveBlock(0, -1);
    if(isBlockOutOfGrid()){
        currentBlock.moveBlock(0, 1);
    }
}
