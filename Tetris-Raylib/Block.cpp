//
//  Block.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 24/07/2023.
//

#include "Block.hpp"

Block::Block(){
    cellSize = 30;
}


std::vector<Block> getGamePieces(std::map<int, std::map<int, std::vector<Position*>>> gamePieces){
    
    std::vector<Block> blocks;
    for (auto& outerPair : gamePieces) {
        int blockId = outerPair.first; // Get the blockId (the key of the outer map)
                
        // Create the Block object
        Block block;
        block.blockId = blockId;
        
        std::map<int, std::vector<Position*>>& blockPosition = outerPair.second;
        //loop the second map
        for(auto& innerPair: blockPosition){
            //get the rotation state
            int rotationState = innerPair.first;
            std::vector<Position*>& position = innerPair.second;
            
            //Insert to map {RotationState: vector of positions} for each rotationState
            //4 rotations states in total
            block.blockPosition[rotationState] = position;
        }
    }
    return blocks;
}


void addGamePiece(int blockId, std::map<int, std::vector<Position*>> blockPosition){
    
    Block newBlock;
    
    newBlock.blockId = blockId;
    newBlock.blockPosition = blockPosition;
    
    //TODO: find out how to add the newBlock to the block vector
}
