#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;


int main() {
	cout << "This is a twitter app using the file SampleTweets.csv" << endl;
	cout << "Select one of the options to begin searching" << endl;
	//calls from the source.cpp file
	menu();
	calculation();




	system("Pause"); 
}