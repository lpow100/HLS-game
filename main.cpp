#include "raylib.h"
#include <iostream>
#include <cmath>

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib 2D Demo");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(GREEN);

        DrawRectangle(500,200,50,50,RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
