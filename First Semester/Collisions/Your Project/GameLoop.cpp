#include "GameLoop.h" // include game loop header
#include "NewVectorLib.h" // include vector math library
#include <iostream> // include iostream library
using namespace std; // use std namespaces

SDL_Keycode key; // makes key to be pressed for switch statements
System::Point2D<int> rPosition1 = { 600, 250 }; // rectangle 1's position
System::Point2D<int> rPosition2 = { 800, 250 }; // rectangle 2's position
System::Point2D<int> rPosition3 = { 600, 450 }; // rectangle 3's position
System::Point2D<int> rPosition4 = { 800, 450 }; // rectangle 4's position
System::Color<int> rColor = { 255, 0, 0, 200 }; // rectangle 1's color
System::Color<int> rColor2 = { 0, 0, 255, 200 }; // rectangle 2's color
System::Color<int> rColor3 = { 255, 255, 0, 200 }; // rectangle 3's color
System::Color<int> rColor4 = { 0, 255, 0, 200 }; // rectangle 4's color
//test
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
	System::Point2D<int> min1 = { rPosition1.X + 100, rPosition1.Y + 100 }; // rectangle 1's min position (bottom right corner)
	System::Point2D<int> max1 = { rPosition1.X, rPosition1.Y}; // rectangle 1's max position (origin point, top left corner)
	System::Point2D<int> min2 = { rPosition2.X + 100, rPosition2.Y + 100 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max2 = { rPosition2.X, rPosition2.Y }; // rectangle 2's max position (origin point, top left corner)
	System::Point2D<int> min3 = { rPosition3.X + 100, rPosition3.Y + 100 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max3 = { rPosition3.X, rPosition3.Y }; // rectangle 3's max position (origin point, top left corner)
	System::Point2D<int> min4 = { rPosition4.X + 100, rPosition4.Y + 100 }; // rectangle 2's min position (bottom right corner)
	System::Point2D<int> max4 = { rPosition4.X, rPosition4.Y }; // rectangle 4's max position (origin point, top left corner)

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

	Graphics::DrawRect(rPosition1, { 100, 100 }, rColor); // draw rect1
	Graphics::DrawRect(rPosition2, { 100, 100 }, rColor2); // draw rect2
	Graphics::DrawRect(rPosition3, { 100, 100 }, rColor3); // draw rect3
	Graphics::DrawRect(rPosition4, { 100, 100 }, rColor4); // draw rect4

}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode) // function that happens when a key is pressed down
{
	
	switch (ac_sdlSym)
	{
	case SDLK_UP:				//whenever up, down, left or right arrow keys are pressed, rectangle1 moves accordingly
		rPosition1.Y -= 8;
		break;
	case SDLK_DOWN:
		rPosition1.Y += 8;
		break;
	case SDLK_LEFT:
		rPosition1.X -= 8;
		break;
	case SDLK_RIGHT:
		rPosition1.X += 8;
		break;

	case SDLK_w:				//whenever w, s, a or d keys are pressed, rectangle2 moves accordingly
		rPosition2.Y -= 8;
		break;
	case SDLK_s:
		rPosition2.Y += 8;
		break;
	case SDLK_a:
		rPosition2.X -= 8;
		break;
	case SDLK_d:
		rPosition2.X += 8;
		break;

	case SDLK_t:				//whenever t, g, f or h keys are pressed, rectangle3 moves accordingly
		rPosition3.Y -= 8;
		break;
	case SDLK_g:
		rPosition3.Y += 8;
		break;
	case SDLK_f:
		rPosition3.X -= 8;
		break;
	case SDLK_h:
		rPosition3.X += 8;
		break;

	case SDLK_i:				//whenever i, k, j or l keys are pressed, rectangle4 moves accordingly
		rPosition4.Y -= 8;
		break;
	case SDLK_k:
		rPosition4.Y += 8;
		break;
	case SDLK_j:
		rPosition4.X -= 8;
		break;
	case SDLK_l:
		rPosition4.X += 8;
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
