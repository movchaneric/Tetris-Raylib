#include <iostream>
#include <raylib.h>
#include "Grid.hpp"

int main(int argc, const char * argv[]) {
    Grid gameGrid = Grid();
    gameGrid.gridInit();
    std::cout << "Memory allocated" << std::endl;
    
    
    InitWindow(500, 600, "Tetris");
    Color DarkBlue = {19, 26, 94};
    SetTargetFPS(60);
    
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(DarkBlue);
        gameGrid.drawGrid();
        
        
        EndDrawing();
    }
    //TODO: deleting causing an error after closing app
    gameGrid.~Grid();
}


