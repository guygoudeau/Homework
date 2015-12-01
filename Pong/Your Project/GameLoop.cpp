#include "GameLoop.h" // include game loop header
#include <iostream> // include iostream library

SDL_Keycode key; // makes key to be pressed for switch statements

System::Point2D<float> P1paddle = { 20, 400 }; // paddle 1's position
System::Point2D<float> P2paddle = { 1570, 400 }; // paddle 2's position
System::Point2D<int> ballsize = { 20, 20 }; // ball's size
Vectors <int> ball = { 800, 450 }; // ball's position
Vectors <int> ballspeed(6, 0); // ball's speed as vector
int ballmid = ballsize.X / 2; // middle of ball
bool ballmove = false; // bool set to false to determine which way ball is going

int P1score = 0; // initialize player 1's score to 0
int P2score = 0; // initialize player 1's score to 0

bool P1up = false; // bool to see if player 1 is moving up
bool P1down = false; // bool to see if player 1 is moving down
bool P2up = false; // bool to see if player 2 is moving up
bool P2down = false; // bool to see is player 2 is moving down

void GameLoop::Loop() // starts game loop
{
	while (m_bRunning) //while loop is running
	{
		SDL_Event sdlEvent; // Will hold the next event to be parsed

		while (m_bRunning) // while loop is running
		{
			// Events get called one at a time, so if multiple things happen in one frame, they get parsed individually through 'SDL_PollEvent'
			// The next event to parse gets stored into 'sdlEvent', and then passed to the 'EventHandler' class which will call it's appropriate function here
			// 'SDL_PollEvent' returns 0 when there are no more events to parse
			while (SDL_PollEvent(&sdlEvent)) // idk blame ben
			{
				// Calls the redefined event function for the EventHandler class
				// Refer to its header file and cpp for more information on what each inherited function is capable of
				// and its syntax
				OnEvent(sdlEvent); // idk blame ben
			}

			Update(); // call update function

			LateUpdate(); // call LateUpdate function

			Draw(); // call draw function

			Graphics::Flip(); // Required to update the window with all the newly drawn content
		}
	}
}

void GameLoop::Update() // define Update function to do the following
{
	
	if (P2up == true) // if bool P2up is true
	{
		P2paddle.Y -= 7; // subtract 7 from player 2's y value
	}
	if (P2down == true) // if bool P2down is true
	{
		P2paddle.Y += 7; // add 7 to player 2's y value 
	}
	if (P1up == true) // if bool P1up is true
	{
		P1paddle.Y -= 7; // subtract 7 from player 1's y value
	}
	if (P1down == true) // if bool P2down is true
	{
		P1paddle.Y += 7; // add 7 to player 1's y value 
	}


	if (P1paddle.Y <= 0) // if player 1's y value is less than or equal to 0
	{
		P1paddle.Y = 0; // set player 1's y value to 0
	}
	if (P1paddle.Y >= 780) // if player 1's y value is more than or equal to 780
	{
		P1paddle.Y = 780; // set player 1's value to 780
	}
	if (P2paddle.Y <= 0) // if player 2's y value is less than or equal to 0
	{
		P2paddle.Y = 0; // set player 2's y value to 0
	}
	if (P2paddle.Y >= 780) // if player 2's y value is more than or equal to 780
	{
		P2paddle.Y = 780; // set player 2's value to 780
	}

	
	if (ballmove == false) // if ballmove is currently false
	{
		ball = ball - ballspeed; // ball is subtracted by ballspeed, making it go left
	}
	if (ballmove == true) // if ballmove is currently true
	{
		ball = ball + ballspeed; // ball is added to ballspeed, making it go right
	}

	// Player 1 bounce
	if (ball.x - ballmid <= 32 && ball.x - ballmid >= 20 && ball.y >= P1paddle.Y && ball.y <= P1paddle.Y + 125) // if a bunch of checks are true, paddle is hit so...
	{
		ballmove = true; // make ballmove true, meaning it goes right
		if (ballspeed.y == 0) // if ballspeed is equal to 0
		{
			ballspeed = { ballspeed.x + 1, ballspeed.y - 1 }; // add 1 to x speed, minus 1 from y speed
		}
		else if (ballspeed.y > 0) // else if ballspeed is more than 0
		{
			ballspeed = { ballspeed.x + 1, -(ballspeed.y) - 1 }; // add 1 to x speed, make y negative reversing direction minus 1
		}
		else if (ballspeed.y < 0) // else if ballspeed is less than 0
		{
			ballspeed = { ballspeed.x + 1, -(ballspeed.y) + 1 }; // add 1 to x speed, make y negative reversing direction plus 1
		}
	}

	// Player 2 bounce 
	if (ball.x + ballmid >= 1570 && ball.x + ballmid <= 1582 && ball.y >= P2paddle.Y && ball.y <= P2paddle.Y + 125) // if a bunch of checks are true, paddle is hit so...
	{
		ballmove = false; // make ballmove false, meaning it goes left
		if (ballspeed.y == 0) // if ballspeed is equal to 0
		{
			ballspeed = { ballspeed.x + 1, ballspeed.y + 1 }; // add 1 to x speed, add 1 to y speed
		}
		else if (ballspeed.y > 0) // else if ballspeed is more than 0
		{
			ballspeed = { ballspeed.x + 1, -(ballspeed.y) - 1 }; // add 1 to x speed, make y negative reversing direction minus 1
		}
		else if (ballspeed.y < 0) // else if ballspeed is less than 0
		{
			ballspeed = { ballspeed.x + 1, -(ballspeed.y) + 1 }; // add 1 to x speed, make y negative reversing direction plus 1
		}
	}

	// top and bottom boundary
	if (ball.y + ballmid >= 900 || ball.y - ballmid <= 0) // if ball hits top or bottom of screen, then...
	{
		ballspeed = { ballspeed.x, -(ballspeed.y) }; // make y's value negative, reversing direction of y
	}

	// player 2 score
	if (ball.x <= 0) // if ball's x value is equal to 0
	{
		P2score++; // add 1 to player 2's score
		std::cout << "Player 2 has scored! Player 2 now has " << P2score << " points" << std::endl; // output score message and current score
		ball = { 1200, 450 }; // set ball back to starting position
		ballspeed = { 6,0 }; // reset balls speed
		ballmove = false; // make ball go left
	}
	// player 1 score
	if (ball.x >= 1600) // if ball's x value is equal to 1600
	{
		P1score++; // add 1 to player 1's score
		std::cout << "Player 1 has scored! Player 1 now has " << P1score << " points" << std::endl; // output score message and current score
		ball = { 400, 450 }; // set ball back to starting position
		ballspeed = {6, 0}; // reset balls speed
		ballmove = true; // make ball go right
	}
	if (P2score == 10) // if player 2 score is equal to 10
	{
		std::cout << "Player 2 wins!" << std::endl; // output win message and end line
		system("pause"); // pause system
		m_bRunning = false; // make running bool equal false, ending program
	}
	if (P1score == 10) // if player 1 score is equal to 10
	{
		std::cout << "Player 1 wins!" << std::endl; // output win message and end line
		system("pause"); // pause system
		m_bRunning = false; // make running bool equal false, ending program
	}
}

void GameLoop::LateUpdate() // define LateUpdate to do the following
{
	key = KMOD_NONE; // no key is being pressed
}

void GameLoop::Draw() // define Draw to do the following
{
	// Objects are drawn in a painter's layer fashion meaning the first object drawn is on the bottom, and the last one drawn is on the top
	// just like a painter would paint onto a canvas

	Graphics::DrawRect({0,0}, { 1600, 1600 }, { 15, 55, 35, 255 }); // Background 
	Graphics::DrawLine({ 800,0 }, { 800, 1000 }, { 255, 255, 255, 255 }); // Middle of screen line
	Graphics::DrawRect( P1paddle, { 12, 125 }, { 255, 255, 255, 255 }); // Player 1 paddle
	Graphics::DrawRect( P2paddle, { 12, 125 }, { 255, 255, 255, 255 }); // Player 2 paddle 
	Graphics::DrawCircle({ ball.x,ball.y }, 10, 50, { 255, 0, 0, 255 }); // Ball

}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode) // following happens while a key is held down
{
	
	switch (ac_sdlSym) // idk blame ben
	{
	case SDLK_ESCAPE: m_bRunning = false; break; // if Esc is pressed, end the loop
	
	case SDLK_UP: // if up is pressed
		P2up = true; // bool p2up is now true
		break; // break case
	case SDLK_DOWN: // if down is pressed
		P2down = true; // bool p2down is now true
		break; // break case

	case SDLK_w: // if w is pressed
		P1up = true; // bool p1up is now true
		break; // break case
	case SDLK_s: // if s is pressed
		P1down = true; // bool p1down is now true
		break; // break case

	default: printf("%s\n",SDL_GetKeyName(ac_sdlSym)); // by default, print whatever key was pressed to the console
		key = ac_sdlSym; // idk blame ben
		break; // break case
	}
}
void GameLoop::OnKeyUp(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode) // following happens when a key is released
{
	switch (ac_sdlSym) // idk blame ben
	{
	case SDLK_UP: // if up is pressed
		P2up = false; // bool p2up is now false
		break; // break case
	case SDLK_DOWN: // if down is pressed
		P2down = false; // bool p2down is now false
		break; // break case

	case SDLK_w: // if w is pressed
		P1up = false; // bool p1up is now false
		break; // break case
	case SDLK_s: // if s is pressed
		P1down = false; // bool p1down is now false
		break; // break case

	default: // by default
		break; // break case
	}
}
void GameLoop::OnExit() // on exit of the loop
{
	m_bRunning = false; // End the loop
}
GameLoop::GameLoop() // actual loop
{
	m_bRunning = true; // game running bool is true
}
GameLoop::~GameLoop() // idk blame ben
{

}
