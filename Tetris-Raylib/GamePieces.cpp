#include "Block.hpp"

class LBlock : public Block{
public:
    LBlock(){
        blockId = 1;
        cells[0] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[1] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
        cells[2] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 0)};
        cells[3] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
        moveBlock(0, 4);
    }
};


class JShapeBlock: public Block{
public:
    JShapeBlock(){
        blockId = 2;
        cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 0)};
        moveBlock(0, 4);
    }
};

class IShapeBlock: public Block{
public:
    IShapeBlock(){
        blockId = 3;
        cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3)};
        cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
        cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2,1), Position(3,1)};
        moveBlock(0,3);
    }
};


class OShapeBlock: public Block{
public:
    OShapeBlock(){
        blockId = 4;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[2] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        moveBlock(0, 4);
    }
};


class SShapeBlock: public Block{
public:
    SShapeBlock(){
        blockId = 5;
        cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[2] = {Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1)};
        cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
        moveBlock(0, 4);
    }
};


class TShapeBlock: public Block{
public:
    TShapeBlock(){
        blockId = 6;
        cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
        moveBlock(0, 4);
    }
};

class ZShapeBlock: public Block{
public:
    ZShapeBlock(){
        blockId = 7;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
        moveBlock(0, 4);
    }
};
