#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;


void menu() {
	
	
	cout << "Please choose a number between 0 and 9." << endl;
	cout << "0 - Will count the number of tweets in the file" << endl;
	cout << "1 - Will count the number of tweets that mention money" << endl;
	cout << "2 - Will count the number of tweets relation to politics" << endl;
	cout << "3 - Will display all the tweets mentioning Paris" << endl;
	cout << "4 - Will display all the tweets mentioning DreamWorks " << endl;
	cout << "5 - Will display all the tweets mentioning Uber" << endl;
	cout << "6 - Will display all the tweets to @realDonaldTrump" << endl;
	cout << "7 - Will display all the tweets mentioning the word Vegan" << endl;
	cout << "8 - Will display all the tweets with a word of phrase you enter" << endl;
	cout << "9 - Will dislay the number of tweets with a word or phrase you enter" << endl;
	
	//all the options the user has.
}


int calculation() {
	int number;
	int tweetTotal = 0;
	string line;
	int offset;
	string Word;
	ifstream inFile;

	inFile.open("SampleTweets.csv");
	//opens the Sample Tweets file
	

	cin >> number;
	//user input

	cin.ignore(1000, '\n');
	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "please enter a number" << endl;
		cin >> number;
		cin.ignore(1000, '\n');

		//makes sure the user inputs the correct data
	}

	

	while (number < 0 || number > 9) {
		cout << "Please enter a number between 0 and 9" << endl;
		cin >> number; 
		cin.ignore(1000, '\n');
		while (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "please enter a number" << endl;
			cin >> number;
			cin.ignore(1000, '\n');
			//makes sure the user inputs a number inside the values stated
		}
	}
	
	if (number >= 0 || number <= 9) {
		if (number == 0) {
			if (inFile.good()) {// makes sure the file is readable
				cout << "Reading the file... Please wait" << endl;
				while (!inFile.eof()) { //reads the fule to the end
					getline(inFile, line);
					tweetTotal++;

				}
				cout << "The total number of tweets in the file is " << tweetTotal << endl;
				//outpust the number of tweets
			}
		}
		//reads the file for tweets relation to money 
		if (number == 1) {
			if (inFile.good()) {
				cout << "Reading the file" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
						tweetTotal++;


					}

				}
				cout << "The number of tweets in the file that mention money is " << tweetTotal << endl;
			}


		}
		//reads the file for words relation to politics
		if (number == 2) {
			if (inFile.good()) {
				cout << "Reading the file" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Politics", 0)) != string::npos || (offset = line.find("politics", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos
						|| (offset = line.find("Trump", 0)) != string::npos || (offset = line.find("MP", 0)) != string::npos || (offset = line.find("prime minister", 0)) != string::npos
						|| (offset = line.find("president", 0)) != string::npos || (offset = line.find("President", 0)) != string::npos || (offset = line.find("Prime Minister", 0)) != string::npos
						|| (offset = line.find("prime minister", 0)) != string::npos || (offset = line.find("government", 0)) != string::npos || (offset = line.find("Government", 0)) != string::npos
						|| (offset = line.find("NHS", 0)) != string::npos || (offset = line.find("Healthcare", 0)) != string::npos || (offset = line.find("Votes", 0)) != string::npos
						|| (offset = line.find("War", 0)) != string::npos || (offset = line.find("war", 0)) != string::npos || (offset = line.find("Theresa May", 0)) != string::npos) {
						tweetTotal++;
						//checks all of the different words i choose that relate to politics
					}
				}
				cout << "The  number of tweets in the file that mention polotocs is " << tweetTotal << endl;
			}
		}
		//reads the file for all the tweets mentioning paris 
		if (number == 3) {
			if (inFile.good()) {
				cout << "Reading the file" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("PARIS", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
						tweetTotal++;
						cout << line << endl;
						cout << " " << endl;
					}
				}
			}
		}

		if (number == 4) {
			if (inFile.good()) {
				cout << "Reading the File" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Dreamworks", 0)) != string::npos || (offset = line.find("dreamworks", 0)) != string::npos || (offset = line.find("DREAMWORKS", 0)) != string::npos
						|| (offset = line.find("DreamWorks", 0)) != string::npos || (offset = line.find("dreamWorks", 0)) != string::npos)
					{
						tweetTotal++;
						cout << line << endl;
						cout << " " << endl;
					}
				}
			}
		}

		if (number == 5) {
			if (inFile.good()) {
				cout << "Reading the File" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Uber", 0)) != string::npos || (offset = line.find("uber", 0)) != string::npos || (offset = line.find("UBER", 0)) != string::npos)
					{
						tweetTotal++;
						cout << line << endl;
						cout << " " << endl;
					}
				}
			}
		}

		if (number == 6) {
			if (inFile.good()) {
				cout << "Reading the File" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("@realDonaldTrump", 0)) != string::npos)
					{
						tweetTotal++;
						cout << line << endl;
						cout << " " << endl;
					}
				}
			}
		}

		if (number == 7) {
			if (inFile.good()) {
				cout << "Reading the File" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Vegan", 0)) != string::npos || (offset = line.find("vegan", 0)) != string::npos || (offset = line.find("VEGAN", 0)) != string::npos)
					{
						tweetTotal++;
						cout << line << endl;
						cout << " " << endl;
					}
				}
			}
		}

		if (number == 8) {

			cout << "Please enter a word or phrase you would like to search for" << endl;
			getline(cin, Word);
			if (inFile.good()) {
				cout << "Reading the File" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find(Word, 0)) != string::npos)
					{
						tweetTotal++;
						

						cout << line << endl;
						cout << " " << endl;
					}
				}
				if (tweetTotal = 0) {
					cout << "No tweets found" << endl;
				}
			}
		}

		if (number == 9) {
			cout << "Please enter a word or phrase you would like to search for" << endl;
			getline(cin, Word); // allows me to get a more than one word 
			if (inFile.good()) {
				cout << "Reading the file" << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find(Word, 0)) != string::npos) {
						tweetTotal++;
					}

				}
				cout << "The  number of tweets in the file that mention " << Word << " is " << tweetTotal << endl;
			}
		}

	}
	return tweetTotal;
}

