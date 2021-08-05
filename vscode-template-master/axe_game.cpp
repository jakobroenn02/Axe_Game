#include "raylib.h"

int main()
{
    // window creation
    int width = 800;
    int wide = 450;
    InitWindow(width, wide, "Jakob");
    int circle_x{200};
    int circle_y{200};

    int axe_x{400};
    int axe_y{0};

    SetTargetFPS(60);
    while (WindowShouldClose() == false){

        BeginDrawing();

        ClearBackground(BLACK);
        //making movement
        DrawCircle(circle_x,circle_y,30,BLUE);
        DrawRectangle(axe_x,axe_y, 50, 50, RED);

        axe_y += 10;

        if (IsKeyDown(KEY_D) && circle_x < 800)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;

        }


        EndDrawing();

    }
   

}