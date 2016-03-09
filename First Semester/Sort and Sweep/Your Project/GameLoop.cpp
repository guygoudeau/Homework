#include "GameLoop.h" // include game loop header
#include "NewVectorLib.h" //include Vector Library
#include <iostream> // include iostream library
using namespace std; // use std namespaces

SDL_Keycode key; // makes key to be pressed for switch statements
System::Point2D<int> BoxA = { 456, 506 }; // rectangle 1's position
System::Point2D<int> BoxB = { 512, 290 }; // rectangle 2's position
System::Point2D<int> BoxC = { 592, 362 }; // rectangle 3's position
System::Point2D<int> BoxD = { 792, 402 }; // rectangle 4's position
System::Color<int> ColorA = { 255, 0, 0, 200 }; // rectangle 1's color
System::Color<int> ColorB = { 0, 0, 255, 200 }; // rectangle 2's color
System::Color<int> ColorC = { 255, 255, 0, 200 }; // rectangle 3's color
System::Color<int> ColorD = { 0, 255, 0, 200 }; // rectangle 4's color

void GameLoop::Loop() // start the game
{
	while (m_bRunning) // While the game is running, do the following
	{
		SDL_Event sdlEvent; // Will hold the next event to be parsed

		while (m_bRunning) // While the game is running, do the following
		{
			// Events get called one at a time, so if multiple things happen in one frame, they get parsed individually through 'SDL_PollEvent'
			// The next event to parse gets stored into 'sdlEvent', and then passed to the 'EventHandler' class which will call it's appropriate function here
			// 'SDL_PollEvent' returns 0 when there are no more events to parse
			while (SDL_PollEvent(&sdlEvent))
			{
				// Calls the redefined event function for the EventHandler class
				// Refer to its header file and cpp for more information on what each inherited function is capable of
				// and its syntax
				OnEvent(sdlEvent);
			}

			Update(); // run update function

			LateUpdate(); // run lateupdate function

			Draw(); // run draw function

			Graphics::Flip(); // Required to update the window with all the newly drawn content
		}
	}
}


void GameLoop::Update() // Update function definition
{
	System::Point2D<int> min1 = { BoxA.X + 250, BoxA.Y + 50 }; // rectangle 1's min position (bottom right corner)
	System::Point2D<int> max1 = { BoxA.X, BoxA.Y}; // rectangle 1's max position (origin point, top left corner)
	System::Point2D<int> min2 = { BoxB.X + 450, BoxB.Y + 50 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max2 = { BoxB.X, BoxB.Y }; // rectangle 2's max position (origin point, top left corner)
	System::Point2D<int> min3 = { BoxC.X + 150, BoxC.Y + 100 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max3 = { BoxC.X, BoxC.Y }; // rectangle 3's max position (origin point, top left corner)
	System::Point2D<int> min4 = { BoxD.X + 150, BoxD.Y + 150 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max4 = { BoxD.X, BoxD.Y }; // rectangle 4's max position (origin point, top left corner)

	if ((max1.X <= min2.X && max2.X <= min1.X) && (max1.Y <= min2.Y && max2.Y <= min1.Y)) // if these border checks prove true
	{
		cout << "Square 1 collision with Square 2" << endl; // output resulting Square 1 and 2 collision
	}
	if ((max1.X <= min3.X && max3.X <= min1.X) && (max1.Y <= min3.Y && max3.Y <= min1.Y)) // if these border checks prove true
	{
		cout << "Square 1 collision with Square 3" << endl; // output resulting Square 1 and 3 collision
	}
	if ((max1.X <= min4.X && max4.X <= min1.X) && (max1.Y <= min4.Y && max4.Y <= min1.Y)) // if these border checks prove true
	{
		cout << "Square 1 collision with Square 4" << endl; // output resulting Square 1 and 4 collision
	}
	if ((max2.X <= min3.X && max3.X <= min2.X) && (max2.Y <= min3.Y && max3.Y <= min2.Y)) // if these border checks prove true
	{
		cout << "Square 2 collision with Square 3" << endl; // output resulting Square 2 and 3 collision
	}
	if ((max2.X <= min4.X && max4.X <= min2.X) && (max2.Y <= min4.Y && max4.Y <= min2.Y)) // if these border checks prove true
	{
		cout << "Square 2 collision with Square 4" << endl; // output resulting Square 2 and 4 collision
	}
	if ((max3.X <= min4.X && max4.X <= min3.X) && (max3.Y <= min4.Y && max4.Y <= min3.Y)) // if these border checks prove true
	{
		cout << "Square 3 collision with Square 4" << endl; // output resulting Square 3 and 4 collision
	}
}

void GameLoop::LateUpdate() // run LateUpdate function
{
	key = KMOD_NONE; // no key is being pressed
}

void GameLoop::Draw() // run Draw function
{
	// Objects are drawn in a painter's layer fashion meaning the first object drawn is on the bottom, and the last one drawn is on the top
	// just like a painter would paint onto a canvas

	Graphics::DrawRect(BoxA, { 250, 50 }, ColorA); // draw rect1
	Graphics::DrawRect(BoxB, { 450, 50 }, ColorB); // draw rect2
	Graphics::DrawRect(BoxC, { 150, 100 }, ColorC); // draw rect3
	Graphics::DrawRect(BoxD, { 150, 150 }, ColorD); // draw rect4

}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode) // function that happens when a key is pressed down
{
	
	switch (ac_sdlSym)
	{
	case SDLK_UP:				//whenever up, down, left or right arrow keys are pressed, rectangle1 moves accordingly
		BoxA.Y -= 8;
		break;
	case SDLK_DOWN:
		BoxA.Y += 8;
		break;
	case SDLK_LEFT:
		BoxA.X -= 8;
		break;
	case SDLK_RIGHT:
		BoxA.X += 8;
		break;

	case SDLK_w:				//whenever w, s, a or d keys are pressed, rectangle2 moves accordingly
		BoxB.Y -= 8;
		break;
	case SDLK_s:
		BoxB.Y += 8;
		break;
	case SDLK_a:
		BoxB.X -= 8;
		break;
	case SDLK_d:
		BoxB.X += 8;
		break;

	case SDLK_t:				//whenever t, g, f or h keys are pressed, rectangle3 moves accordingly
		BoxC.Y -= 8;
		break;
	case SDLK_g:
		BoxC.Y += 8;
		break;
	case SDLK_f:
		BoxC.X -= 8;
		break;
	case SDLK_h:
		BoxC.X += 8;
		break;

	case SDLK_i:				//whenever i, k, j or l keys are pressed, rectangle4 moves accordingly
		BoxD.Y -= 8;
		break;
	case SDLK_k:
		BoxD.Y += 8;
		break;
	case SDLK_j:
		BoxD.X -= 8;
		break;
	case SDLK_l:
		BoxD.X += 8;
		break;

	case SDLK_p:
		cout << "Box A coords: " << BoxA.X << " , " << BoxA.Y << endl;
		cout << "Box B coords: " << BoxB.X << " , " << BoxB.Y << endl;
		cout << "Box C coords: " << BoxC.X << " , " << BoxC.Y << endl;
		cout << "Box D coords: " << BoxD.X << " , " << BoxD.Y << endl;
		break;

	case SDLK_ESCAPE: // if escape key is pressed
		m_bRunning = false; //running bool equals false, end program
		break; // End the loop
	default: //any non-defined key does nothing
		break; // break case
	}
}
void GameLoop::OnKeyUp(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode) // function that happens when a key is released
{
	switch (ac_sdlSym)
	{
	default: break; // break case
	}
}
void GameLoop::OnExit() // on exit of the loop
{
	m_bRunning = false; // End loop
}

GameLoop::GameLoop() // actual loop
{
	m_bRunning = true; // game running bool is true
}
GameLoop::~GameLoop() // idk blame ben
{

}
