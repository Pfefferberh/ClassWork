//1. File Encryption Filter.File encryption is the science of writing the contents of a file in a secret code.
//Your encryption program should work like a filter, reading the contents of one file, modifying the data into a code,
//and then writing the coded contents out to a second file.The second file will be a version of the first file, but written in a secret code.
//Although there are complex encryption techniques, you should come up with a simple one of your own.For example, you could read the first file
//one character at a time, and add 10 to the ASCII code of each character before it is written to the second file.

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void coding();
void recoding();
//void coding(string my_file);
//void recoding(string my_file);

int main() {
	string my_file;
	int choise = 0;
	bool go_out = false;
	for (; go_out == false;) {
		cout << "1.Encryption text file\n2.REencryption text file"/*\n3.Enter my file for encryption\n4.Enter my file for REencryption*/"\n0.Exit" << endl;
		choise = _getch();
		switch (choise)
		{
		case 49:
			system("cls");
			coding();
			system("cls");
			break;
		case 50:
			system("cls");
			recoding();
			system("cls");
			break;
			//case 51:
			//	system("cls");
			//	cout << "Enter the way and name fale for encryption " << endl;
			//	cin >> my_file;
			//	coding(my_file);
			//	system("cls");
			//	break;
			//case 52:
			//	system("cls");
			//	cout << "Enter the way and name fale for REencryption " << endl;
			//	my_file="C:\\Users\\work\\Downloads\\hw_1571744508";
			//	recoding(my_file);
			//	system("cls");
			//	break;
		case 48:
			go_out = true;
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}

void coding() {
	char key = ' ';
	int password_key = 0;
	cout << "End the key '.'" << endl;
	cout << "Enter the key : ";
	for (int i = 0; key != '.'; key = _getche()) {
		password_key += key;
	}

	string text = "text.txt";

	ifstream read_file;

	read_file.open(text);
	vector <int> data;
	char sumbol;
	while (!read_file.eof()) {
		sumbol = ' ';
		read_file.get(sumbol);
		data.push_back(int(sumbol + password_key));
	}
	read_file.close();

	ofstream writeFile;
	string encryption = "encryption.txt";

	writeFile.open(encryption);
	if (!writeFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		unsigned  vector_size = data.size();
		for (int i = 0; i < vector_size; i++) {
			writeFile << char(data[i]);
		}
	}
	writeFile.close();

}

void recoding() {
	char key = ' ';
	int password_key = 0;
	cout << "End the key '.'" << endl;
	cout << "Enter the key : ";
	for (int i = 0; key != '.'; key = _getche()) {
		password_key += key;
	}

	string encryption = "encryption.txt";
	ifstream read_file;

	read_file.open(encryption);

	vector <int> data;
	char sumbol;
	while (!read_file.eof()) {
		read_file >> sumbol;
		data.push_back(int(sumbol - password_key));
	}

	read_file.close();

	ofstream writeFile;
	string reencryption = "REencryption.txt";

	writeFile.open(reencryption);
	if (!writeFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		unsigned  vector_size = data.size();
		for (int i = 0; i < vector_size; i++) {
			writeFile << char(data[i]);
		}
	}
	writeFile.close();

}

//void coding(string text) {
//	char key = ' ';
//	int password_key = 0;
//	cout << "End the key '.'" << endl;
//	cout << "Enter the key : ";
//	for (int i = 0; key != '.'; key = _getche()) {
//		password_key += key;
//	}
//
//	ifstream read_file;
//
//	read_file.open(text);
//	vector <int> data;
//	char sumbol;
//	while (!read_file.eof()) {
//		sumbol = ' ';
//		read_file.get(sumbol);
//		data.push_back(int(sumbol + password_key));
//	}
//	read_file.close();
//
//	ofstream writeFile;
//	string encryption = "encryption.txt";
//
//	writeFile.open(encryption);
//	if (!writeFile.is_open()) {
//		cout << "Can't open file!" << endl;
//	}
//	else {
//		unsigned  vector_size = data.size();
//		for (int i = 0; i < vector_size; i++) {
//			writeFile << char(data[i]);
//		}
//	}
//	writeFile.close();
//
//}
//
//void recoding(string text) {
//	char key = ' ';
//	int password_key = 0;
//	cout << "End the key '.'" << endl;
//	cout << "Enter the key : ";
//	for (int i = 0; key != '.'; key = _getche()) {
//		password_key += key;
//	}
//
//	string encryption = "encryption.txt";
//	ifstream read_file;
//
//	read_file.open(encryption);
//
//	vector <int> data;
//	char sumbol;
//	while (!read_file.eof()) {
//		read_file >> sumbol;
//		data.push_back(int(sumbol - password_key));
//	}
//
//	read_file.close();
//
//	ofstream writeFile;
//	string reencryption = "REencryption.txt";
//
//	writeFile.open(reencryption);
//	if (!writeFile.is_open()) {
//		cout << "Can't open file!" << endl;
//	}
//	else {
//		unsigned  vector_size = data.size();
//		for (int i = 0; i < vector_size; i++) {
//			writeFile << char(data[i]);
//		}
//	}
//	writeFile.close();
//
//}