#include <iostream>
using namespace std;

float Half(float number)
{
	return number / 2;
}

int main()
{

float number = 16.721f;
float result = Half(number); //result is 8.3605

cout << result << endl;


	system("pause");
	return 0;
}