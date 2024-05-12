#include <raylib.h>

int main()
{
    int width = 1000;
    int height = 700;
    InitWindow(width, height, "Amazing Game");
    SetTargetFPS(120);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(100, 100, 80.0f, ORANGE);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}

