//Guy Goudeau
//Sep 21, 2015
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

	ifstream file;
	ofstream file2;
	char c[100];
	char input[100];
	int value;

	do {
		cout << "What do you want to do?" << endl;
		cout << "1.) Display file" << endl;
		cout << "2.) Write and append to file" << endl;
		cout << "3.) Clear file" << endl;
		cout << "4.) Exit program" << endl;
	
		cin >> value;

		switch (value)
		{
		case 1:
			//display file
			file.open("MyLog.txt", ios_base::in | ios_base::_Nocreate);
			file.getline(c, 100);
			cout << c << endl;
			file.close();
			break;
		case 2:
			//write to file
			file2.open("MyLog.txt", ios_base::app);
			cout << "Input to be appended to file: ";
			cin.clear();
			cin.getline(input, 100);
			cin.getline(input, 100);
			file2 << input;
			cout << "Input has been appended to file." << endl;
			file2.close();
			break;
		case 3:
			//clear file
			file.open("MyLog.txt", ios_base::out | ofstream::trunc);
			cout << "File has been cleared." << endl;
			file.close();
			break;
		case 4:
			//exit program
			cout << "Program will now exit." << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (value != 4);

	
	return 0;
}