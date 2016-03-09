//Guy Goudeau
//Sep 22, 2015
#include <iostream>
#include <fstream>
using namespace std;

//Create a text file that records scores.              *COMPLETE*
//create a Function that adds scores to the file.      *COMPLETE*
//only keep the 10 highest.                            
//Save them to the file								   *COMPLETE*
//Order the scores from highest to lowest              
//Print the newly ordered list to the console          *COMPLETE*
//Then save it to file								   *COMPLETE*

ifstream iFile;
ofstream oFile;
int score;
char list[25];

void addScores()
{
	oFile.open("Scores.txt", ios_base::app);
	cout << "Enter score: ";
	cin.clear();
	cin >> score;
	oFile << score << " ";
	cout << "New score has been added." << endl << endl;
	oFile.close();
}

void displayScores()
{
	iFile.open("Scores.txt", ios_base::in | ios_base::_Nocreate);
	iFile.getline(list, 21);
	cout << "Scores: " << list << endl;
	iFile.close();
}


int main()
{
	
	while (true)
	{
		addScores();
		displayScores();
	}

	system("pause");
	return 0;
}