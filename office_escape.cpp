#include<raylib.h>
int main(){

    //ScreenDimensions
    const int screenHeight=380;
    const int screenWidth=512;

    //Rectangle Dimensions
    const int rectHeight{80};
    const int rectWidth{50};

    const int rectPosX{screenWidth/2};
    int rectPosY{screenHeight-rectHeight};

    //Gameplay Parameters
    int velocity=-30;

    //Initialisng the Window
    InitWindow(screenWidth,screenHeight,"Office Escape!");

    SetTargetFPS(144);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE); //Clearing Screen to avoid Rapid Blinks
        
        //Code Body 
        DrawRectangle(rectPosX,rectPosY,rectWidth,rectHeight,BLUE);
        if(IsKeyPressed(KEY_SPACE)){

            rectPosY+=velocity;    
        

        }
        else if(IsKeyReleased(KEY_SPACE)){

            rectPosY=screenHeight-rectHeight;

        } 

        EndDrawing();
    }
    
    CloseWindow();
}