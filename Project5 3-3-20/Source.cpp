/*

This is a Magic 8-ball Program. The user will ask a question, and the magic 8 ball will give a random answer, as if by magic

Author: James Runyon
Date: 3/3/20


First, tell the user ask a question.
Type that question into the program.

Generate a random answer from the choices programed into the computer, This will use vectors.

Output the original question, and the computer generates an answer.

Ask if you need to ask the magic 8 ball another question, if yes then continue. If not, stop program.






*/

#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	string question, repeat;
	vector<string> answers(10);
	srand(time(0)); // seeds the random number generator
	int randomNum;
	bool again = true;

	
	while (again) {
		//Ask question of the user
		cout << "Ask me a yes or no question\n";
		getline(cin, question); // retrieves the entire line

		//Inputed answers in a vector

		answers.at(0) = "Yes";
		answers.at(1) = "No";
		answers.at(2) = "Maybe";
		answers.at(3) = "Leave me alone!";
		answers.at(4) = "It's complicated";
		answers.at(5) = "Try asking again";
		answers.at(6) = "What?";
		answers.at(7) = "Most likely.";
		answers.at(8) = "It is certain.";
		answers.at(9) = "...";

		randomNum = rand() % 10; // Generates random numbers from 0 through 9

		cout << endl << answers.at(randomNum) << endl;

		cout << "Do you want to ask it another question? Type 'yes' to continue or any key to stop\n";
		cin >> repeat;
		if (repeat == "yes") {
			again = true;
			cin.ignore(); //Clears out cin buffer to ask another question
		}
		else {
			again = false;
		}
	}

	return 0;
}