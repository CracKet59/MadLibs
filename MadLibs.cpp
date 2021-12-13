// MadLibs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string noun, place, thing;
	cout << "Give me a proper noun: ";
	getline(cin, noun);
	cout << "\nGive me a place: ";
	getline(cin, place);
	cout << "\nGive me a thing: ";
	getline(cin, thing);
	cout << "\n" << noun << " went to the " << place << " to get a " << thing << ".";

		return 0;
}