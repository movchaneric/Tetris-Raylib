//
//  Colors.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 23/07/2023.
//

#include "Colors.hpp"

const Color backgroundColor = {57, 38, 117, 255 };

const Color Cyan = { 0, 255, 255, 255 };
const Color Yellow = { 255, 255, 0, 255 };
const Color Magenta = { 255, 0, 255, 255 };
const Color Green = { 0, 255, 0, 255 };
const Color Red = { 255, 0, 0, 255 };
const Color Blue = { 0, 0, 255, 255 };
const Color Orange = { 255, 165, 0, 255 };
const Color Purple = { 128, 0, 128, 255 };
const Color Lime = { 0, 255, 0, 255};
const Color Pink = { 255, 192, 203, 255 };

std::vector<const Color*> getColors() {
    std::vector<const Color*> colors;
    
    colors.push_back(&backgroundColor);
    colors.push_back(&Cyan);
    colors.push_back(&Yellow);
    colors.push_back(&Magenta);
    colors.push_back(&Green);
    colors.push_back(&Red);
    colors.push_back(&Blue);
    colors.push_back(&Orange);
    colors.push_back(&Purple);
    colors.push_back(&Lime);
    colors.push_back(&Pink);
    
    return colors;
}
