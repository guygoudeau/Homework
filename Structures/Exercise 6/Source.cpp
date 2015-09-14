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

 //Write a program that simulates an RPG shop inventory. The shop should store how much
 //gold it currently has. It should also store an array of items it can stock. Each item should
 //have the name of that item, the cost per item and the quantity of that item currently in the
 //shop. The program should have the following options:
 //a. Change the price of each item in the shop
 //b. Spend gold to add stock for a specific item
 //c. Sell stock for a specific item to gain more gold


struct Items
{
	string name;
	int cost;
	int quant;
};

Items stuff[3];

void itemCreate()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter an item's name: ";
		cin >> stuff[i].name;
		cout << "Enter the item's cost: ";
		cin >> stuff[i].cost;
		cout << "Enter the item's quantity: ";
		cin >> stuff[i].quant;
		cout << endl;
	}
}



int main()
{
	cout << "---------------OWNER ONLY----------------" << endl;
	itemCreate();
	cout << "-----------------------------------------" << endl << endl;

	cout << "Welcome to the store! The items available are as follows." << endl << endl;
	cout << "First item: A " << stuff[0].name << " for " << stuff[0].cost << " gold. We have " << stuff[0].quant << " of that item available." << endl;
	cout << "Second item: A " << stuff[1].name << " for " << stuff[1].cost << " gold. We have " << stuff[1].quant << " of that item available." << endl;
	cout << "Third item: A " << stuff[2].name << " for " << stuff[2].cost << " gold. We have " << stuff[2].quant << " of that item available." << endl;
	cout << endl;


	system("pause");
	return 0;
}