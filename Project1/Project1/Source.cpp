
#include <iostream>
#include <ctime>
using namespace std;

float menu(float digit, float digit2, char operation, float sum, bool exit, bool exitMenu, float resault);
float subtract(float digit, float digit2, char operation, float sum, bool exit, float resault);
float addition(float resault);
float division(float digit, float digit2, char operation, float sum, bool exit, float resault);
float multiplicate(float digit, float digit2, char operation, float sum, bool exit, float resault);

float addition(float resault) {
	float digit = 0, digit2 = 0, sum = 0;
	char operation = '+';
	bool exit = false, exitMenu = false;
	cout << " Are you want working with resault?(yes press '+',no something another)";
	cin >> operation;
	if (operation == '+') {
		cout << resault;
		sum = resault;
		cin >> operation;
	}
	else if (operation != '+') {
		cout << "Enter the digit" << endl;
		cin >> digit;
		sum = digit;
		cin >> operation;
	}
	for (int i = 0; exit == false; i++) {
		if (operation == '+') {
			cin >> digit2;
			sum = sum + digit2;
			cin >> operation;
		}
		else if (operation == '=') {
			cout << "Resault : " << sum << endl << endl;
			resault = sum;
			exit = true;
		}
		else {
			cout << "Eror" << endl;
		}
	}
	return resault;
}

float subtract(float digit, float digit2, char operation, float sum, bool exit, float resault) {
	cout << " Are you want working with resault?(yes press '+',no something another)";
	cin >> operation;
	if (operation == '+') {
		cout << resault;
		sum = resault;
		cin >> operation;
	}
	else if (operation != '+') {
		cout << "Enter the digit" << endl;
		cin >> digit;
		sum = digit;
		cin >> operation;
	}
	for (int i = 0; exit == false; i++) {
		if (operation == '-') {
			cin >> digit2;
			sum = sum - digit2;
			cin >> operation;
		}
		else if (operation == '=') {
			cout << "Resault : " << sum << endl << endl;
			resault = sum;
			exit = true;
		}
		else {
			cout << "Eror" << endl;
		}
	}
	return resault;
}

float division(float digit, float digit2, char operation, float sum, bool exit, float resault) {
	cout << " Are you want working with resault?(yes press '+',no something another)";
	cin >> operation;
	if (operation == '+') {
		cout << resault;
		sum = resault;
		cin >> operation;
	}
	else if (operation != '+') {
		cout << "Enter the digit" << endl;
		cin >> digit;
		sum = digit;
		cin >> operation;
	}
	for (int i = 0; exit == false; i++) {
		if (operation == '/') {
			cin >> digit2;
			if (digit == 0) {
				cout << "Error division 0" << endl << endl;
				exit = true;
			}
			sum = sum / digit2;
			resault = sum;
			cin >> operation;
		}
		else if (operation == '=') {
			cout << "Resault : " << sum << endl << endl;
			exit = true;
		}
		else {
			cout << "Eror" << endl;
		}
	}
	return resault;
}

float multiplicate(float digit, float digit2, char operation, float sum, bool exit, float resault) {
	cout << " Are you want working with resault?(yes press '+',no something another)";
	cin >> operation;
	if (operation == '+') {
		cout << resault;
		sum = resault;
		cin >> operation;
	}
	else if (operation != '+') {
		cout << "Enter the digit" << endl;
		cin >> digit;
		sum = digit;
		cin >> operation;
	}
	for (int i = 0; exit == false; i++) {
		if (operation == '*') {
			cin >> digit2;
			sum = sum * digit2;
			cin >> operation;
		}
		else if (operation == '=') {
			cout << "Resault : " << sum << endl << endl;
			resault = sum;
			exit = true;
		}
		else {
			cout << "Eror" << endl;
		}
	}
	return resault;
}


int main() {
	float digit = 0, digit2 = 0, sum = 0, resault = 0;
	char operation = '+';
	bool exit = false, exitMenu = false;
	float res = 0;
	for (int i = 0; exitMenu == false; i++) {
		cout << "Choise the operation                                        Now your resault : " << res << endl;
		cout << "{+}Addition" << endl;
		cout << "{-}Subtract" << endl;
		cout << "{/}Division" << endl;
		cout << "{*}Multiplicate" << endl;
		cout << "{0}Exit" << endl;
		cin >> operation;
		switch (operation) {
		case '+':

			res = addition(res);
			break;
		case '-':
			res = subtract(digit, digit2, operation, sum, exit, res);
			break;
		case '/':
			res = division(digit, digit2, operation, sum, exit, res);
			break;
		case '*':
			res = multiplicate(digit, digit2, operation, sum, exit, res);
			break;
		case '0':
			cout << "Good bye" << endl;
			exitMenu = true;
			break;
		default:
			cout << "Error wrong sumbol" << endl;
			break;
		}

	}

	system("pause");
	return 0;
}