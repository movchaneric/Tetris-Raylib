//
//  main.cpp
//  Tetris-Raylib
//
//  Created by Eric Movchan on 23/07/2023.
//

#include <iostream>
#include <raylib.h>
#include "Grid.hpp"

int main(int argc, const char * argv[]) {
    Grid gameGrid = Grid();
    gameGrid.gridInit();
    gameGrid.printGrid();
    
    InitWindow(500, 600, "Tetris");
    Color DarkBlue = {19, 26, 94};
    SetTargetFPS(60);
    
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(DarkBlue);
        gameGrid.drawGrid();
        
        EndDrawing();
    }
    
}

