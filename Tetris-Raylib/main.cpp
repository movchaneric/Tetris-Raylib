#include <iostream>
#include <raylib.h>
#include "MainGame.hpp"

double lastTimeChanged = 0;

bool timeInterval(const double& interval){
    double lastTime = GetTime();
    if(lastTime - lastTimeChanged >= interval){
        lastTimeChanged = lastTime;
        return true;
    }
    return false;
}


int main(int argc, const char * argv[]) {
    
    MainGame* game = new MainGame();
    
    InitWindow(500, 600, "Tetris");
    Color DarkBlue = {19, 26, 94};
    SetTargetFPS(60);

    while(WindowShouldClose() == false){
        game->handleUserAction();
        
        BeginDrawing();
        ClearBackground(DarkBlue);
        
        if(timeInterval(0.2)){
            game->moveBlockDown();
        }
        
        game->drawGame();
        
        EndDrawing();
    }
}


