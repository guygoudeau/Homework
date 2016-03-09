#include <iostream>              //calls in iostream library
using namespace std;             //uses std namespace so you don't have to put std:: before your code

float addStuff(float a, float b) //defining the function and giving it arguments
{
	float sum;                   //defining the variable 'sum'
	sum = a + b;                 //making the variable sum equal to the variables a + b
	cout << sum << endl;         //output sum to the console and end the line
	return sum;                  //return the sum
}

int main()                       //this is your main where you call your functions
{

	addStuff(4.2, 6.9);         //call function and give it specific arguments


	system("pause");             //pause the screen
	return 0;                    //return 0
}