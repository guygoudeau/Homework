#include <iostream>
#include <string>
using namespace std;
////////////////////////////
//  Can't figure it out?  //
//    Keep on trying!     //
//     Never give up!     //
// Nothing is impossible! //
//  Dont let your dreams, //
//     be dreams.         //
//  DO IT! JUST, DO IT!   //
////////////////////////////


class Date
{
public:
	Date(int, int, int);
	void printdate();

private:
	int day;
	int month;
	int year;
};

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::printdate()
{
	cout << "Today's date is: " << day << "/" << month << "/" << year << endl;
}

int main()
{
	Date currentdate(7, 8, 1996);
	currentdate.printdate();


	system("pause");
	return 0;
}