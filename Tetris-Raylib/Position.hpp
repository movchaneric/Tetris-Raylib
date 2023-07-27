//
//  Position.hpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 24/07/2023.
//

#ifndef Position_hpp
#define Position_hpp

#include <stdio.h>

class Position{
public:
    int row, col;
    Position(const int& row, const int& col);
};

#endif /* Position_hpp */
