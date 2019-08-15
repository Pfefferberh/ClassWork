
//Калькуляторр з перевантаженими функціями(на 2 числа)

#include <iostream>
using namespace std;

double sum(double a, double b);
double sum(int a, double b);
double sum(double a, int b);
double sum(int a, int b);

double dis(double a, double b);
double dis(int a, double b);
double dis(double a, int b);
double dis(int a, int b);

double mult(double a, double b);
double mult(int a, double b);
double mult(double a, int b);
double mult(int a, int b);

double divat(double a, double b);
double divat(int a, double b);
double divat(double a, int b);
double divat(int a, int b);

int main() {
	cout << " Welcome to calculation " << endl;
	cout << "Make your choise,integer or double " << endl;
	char  choise = 'i';
	cin >> choise;
	
	if (choise == 'i') {
		int a = 0, b = 0, resault = 0;
		char oper = '+';
		cout << "Choise operation " << endl;
		cin >> oper;
		switch (oper)
		{
		case '+':

			resault = sum(a, b);
			break;
		case '-':
			resault = dis(a, b);
			break;
		case '*':
			resault = mult(a, b);
			break;
		case '/':
			resault = divat(a, b);
			break;
		default:
			cout << "Wrong sumbol" << endl;
			break;
		}
		cout << "Resault " << resault << endl;
	}
	else if (choise == 'd') {
		double a = 0, b = 0, resault = 0;
		char oper = '+';
		cout << "Choise operation " << endl;
		cin >> oper;
		switch (oper)
		{
	    case '+':
			resault = sum(a, b);
			break;
		case '-':
			resault = dis(a, b);
			break;
		case '*':
			resault = mult(a, b);
			break;
		case '/':
			resault = divat(a, b);
			break;
		default:
			cout << "Wrong sumbol" << endl;
			break;
		}
		cout << "Resault " << resault << endl;
	}
	else {
		cout << " try again " << endl;
	}
	system("pause");
}


double sum(double a,double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double sum(int a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double sum(double a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double sum(int a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}

double dis(double a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double dis(int a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double dis(double a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}
double dis(int a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a + b;
}

double mult(double a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a * b;
}
double mult(int a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a * b;
}
double mult(double a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a * b;
}
double mult(int a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a * b;
}

double divat(double a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a / b;
}
double divat(int a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a / b;
}
double divat(double a, int b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a / b;
}
double divat(int a, double b) {
	cout << "Enter a,b " << endl;
	cin >> a >> b;
	return a / b;
}

