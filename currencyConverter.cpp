#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
using namespace std;



void East(char select2, double input)
{

	switch(select2)
	{

		case 'a' :
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Australia = " << fixed << setprecision(2)  << input * 0.33 << endl ; 
		cout << "--------------------------" << endl;
		break;

		case 'b' :
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Bangladesh = " << fixed << setprecision(2) << input * 20.46 << endl ; 
		cout << "--------------------------" << endl;
		break;

		case 'c' :
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Brunei = " << fixed << setprecision(2) << input * 0.32 << endl ; 
		cout << "--------------------------" << endl;
		break;

		case 'd' : 
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to China = " << fixed << setprecision(2) << "China : " << input * 1.55 << endl ; 
		cout << "--------------------------" << endl;
		break;

	}

}

void South(char select2, double input)
{

	switch(select2)
	{

		case 'a':
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Fiji = " << fixed << setprecision(2) << input * 0.50 << endl ; 
		cout << "--------------------------" << endl;
		break;

		case 'b':
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Thai Baht = " << fixed << setprecision(2) << input * 7.95 << endl ; 
		cout << "--------------------------" << endl;
		break;


	}

}

void Others(char select2, double input)
{

	switch(select2)
	{

		case 'a':
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Korea = " << fixed << setprecision(2) << input * 283.38 << endl; 
		cout << "--------------------------" << endl;
		break;

		case 'b':
		cout << "--------------------------" << endl;
		cout << "Rm" << input << " to Japan = " << fixed << setprecision(2) << input * 26.24 << endl ; 
		cout << "--------------------------" << endl;
		break;


	}

}


int main()
{

	double input;
	int select;
	char select2;

	cout << setw(30) << " __________________ " << endl;
	cout << setw(30) << "|Currency Converter|" << endl;
	cout << setw(30) << "|------------------|" << endl;

	cout << "\nPlease input your amount(Rm): " ;

	while(!(cin >> input) || input <= 0)
	{

		cout << "Please type a valid amount: ";
		cin.clear();
		cin.ignore(123, '\n');

	}

	cout << "--------------------------" << endl;

	cout << "\n";
	cout << "1.East-Pacific Region " << endl;
	cout << "2.South pacific" << endl;
	cout << "3.Others " << endl;

	cout << "\nPlease select: " ;

	while(!(cin >> select) || select < 1 || select > 3)
	{

		cout << "Please type a valid number: ";
		cin.clear();
		cin.ignore(123, '\n');

	}


	select = tolower(select);
	cout << "--------------------------\n" << endl;


	switch(select)
	{

		case 1:
		system("CLS");
		cout << "A Australia " << endl;
		cout << "B Bangladesh " << endl;
		cout << "C Brunei   " << endl;
		cout << "D China    " << endl;

		cout << "\nSelect a country: ";
		cin >> select2;
		select2 = tolower(select2);
		
		East(select2, input);
		break;
		

		case 2:
		system("CLS");
		cout << "A Fiji " << endl;
		cout << "B Thai Baht " << endl;

		cout << "\nSelect a country: ";
		while(!(cin >> select2) && select2 != 'a' && select2 != 'b')
		{
			cout << "Please input a valid char: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		select2 = tolower(select2);

		South(select2, input);
		break;

		case 3:
		system("CLS");
		cout << "A Korea " << endl;
		cout << "B Japan " << endl;

		cout << "\nSelect a country: ";
		cin >> select2;

		select2 = tolower(select2);
		

		Others(select2, input);
		break;



	}


}