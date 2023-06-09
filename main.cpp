#include "raylib.h"
#include <iostream>

//------------------------------------------------------------------------------------
// Global variables
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
// Methods
//------------------------------------------------------------------------------------
void Input() {

}

void Update() {
    Input();
}

void Draw() {
    Vector2 screen {(float) GetScreenWidth(), (float) GetScreenHeight()};
    Vector2 screenCentre {screen.x / 2, screen.y / 2};

    DrawLineEx(Vector2 {(float) screenCentre.x + 20, screenCentre.y - 10 }, Vector2 {screenCentre.x, screenCentre.y}, 4.0f, GREEN);
    DrawLineEx(Vector2 {(float) screenCentre.x + 20, screenCentre.y + 10 }, Vector2 {screenCentre.x, screenCentre.y}, 4.0f, GREEN);
}

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(800, 450, "A Sparkle At Sea | Made by Ashures");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update variables
        //----------------------------------------------------------------------------------
        Update();
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);

        Draw();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}