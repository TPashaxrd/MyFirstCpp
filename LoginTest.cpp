  //Hello Guys! This is my First CPP Project.
//This is Login Page. Only Moment.
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	//We starting its string's.
	string nick;
	string password;
	//Nick and Password 
	string correctNick = "Sys11";
	string correctPassword = "Sys11";
	
	//UserName or Nick Checking
	cout << "Enter your Nick Name => ";
	cin >> nick;
	//Password Checking
	cout << "Enter your Password => ";
	cin >> password;
	
	if (nick == correctNick && password == correctPassword) {
		system("cls");
		cout << R"(
____  _  _   _  _  _____ 
|___ \| || | | || ||___ / 
  __) | || |_| || |_ |_ \ 
 / __/|__   _|__   _|__) |
|_____|  |_|    |_||____/ 
			)" << endl;
		cout << "\nYour Nick & Password are Correct!\n" << endl;
	}
	else if (nick == correctNick && password != correctPassword) {
		cout << "your only Password are InCorrect!" << endl;
	}
	else if (nick != correctNick && password == correctPassword) {
		cout << "Your only User Name are InCorrect!";
	}
	else if (nick != correctNick && password != correctPassword) {
		cout << "Both are InCorrect. Why? Are u FBI?\n\nSys11 every time watching you.\nYou Can't escape from me.\nFederal? FBI? or anything. I don't joking";
	}
	else {
		cout << "We have problem with your computer. Sys11 Always with you.\nStay with Sys11." << endl;
	}
	
}
