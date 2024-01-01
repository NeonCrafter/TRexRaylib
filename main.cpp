#include <raylib.h>
#include <iostream>
#include <string>

using namespace std;
int main(void){
	const int screenWidth = 800;
	const int screenHeight = 500;
	InitWindow(screenWidth , screenHeight , "T-rex go brrr");
	Image Frames[6] = {
		LoadImage("F1.png"),
		LoadImage("F2.png"),
		LoadImage("F3.png"),
		LoadImage("F4.png"),
		LoadImage("F5.png"),
		LoadImage("F6.png"),
	};
	while(!WindowShouldClose()){
		HideCursor();
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
	CloseWindow();
	return 0;
};
