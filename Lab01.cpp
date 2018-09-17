// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::ifstream;

int main()
{
	string filename;
	double first1=0, first2=0, last1=0, last2=0,temp;
	int total = 0;
	cout << "Please enter a file name: ";
	cin >> filename;
	ifstream inFile;
	inFile.open(filename);

	inFile >> first1;
	inFile >> first2;
	inFile >> last1;

	total = 3;

	inFile >> temp;

	while(!inFile.fail())
	{
			last2 = last1;
			last1 = temp;
			inFile >> temp;
			total++;
	} 

	cout << "\nFirst Number: " << first1 << "\nSecond Number: " << first2 << "\n\nSecond to Last Number: " << last2 << "\nLast Number: " << last1 << "\n\nTotal: " << total<<"\n";
	
	inFile.close();
}
