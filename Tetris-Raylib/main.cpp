#include <iostream>
#include <raylib.h>
#include "MainGame.hpp"

int main(int argc, const char * argv[]) {
    
    MainGame* game = new MainGame();
    
    InitWindow(500, 600, "Tetris");
    Color DarkBlue = {19, 26, 94};
    SetTargetFPS(60);
    

    while(WindowShouldClose() == false){
        game->handleUserAction();
        
        BeginDrawing();
        ClearBackground(DarkBlue);
        
        game->drawGame();
        
        EndDrawing();
    }
}


