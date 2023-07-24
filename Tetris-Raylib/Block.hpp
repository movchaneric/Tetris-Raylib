#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>
#include <map>
#include <vector>
#include "Position.hpp"

class Block
{
public:
    Block();
    int blockId;
    std::map< int, std::vector<Position*>> getGamePieces();
    void addGamePiece(int blockId,
                      std::map<int, std::vector<Position*>> blockPosition);

    std::map< int, std::vector<Position*> > blockPosition;
private:
    int cellSize;
};

#endif /* Block_hpp */
