//Guy Goudeau
//Oct 5, 2015
#include <iostream>
using namespace std;

template <typename T>
T Min(T a, T b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

template <typename M>
M Max(M a, M b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <typename C>
C Clamp(C min, C max, C val)
{
	val = ((min - val) / (max - val));
	return val;
}

int main()
{
	int minRes = Min<int>(1, 100);
	cout << minRes << endl;

	int maxRes = Max<int>(1, 100);
	cout << maxRes << endl;

	int clampRes = Clamp<int>(1, 3, 5);
	cout << clampRes << endl;


	system("pause");
	return 0;
}