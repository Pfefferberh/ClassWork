#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {
	string batman = "rr.txt";
	ifstream read_file;

	string data;
	int SIZE = 0;
	read_file.open(batman);
	if (!read_file.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		while(!read_file.eof()) {
			getline(read_file, data);
			cout << data << endl;
			SIZE++;
		}
	
	}
	read_file.close();
	cout << "SIZE!!!!" << SIZE << endl;


	/*
	
	string data2[15];
	for (int i = 0; !read_file.eof(); i++) {
		getline(read_file, data);
		
	}
	cout << SIZE << endl;
	string *arr = new string[SIZE];
	for (int i = 0; i < SIZE; i++) {
		getline(read_file, data);
		arr[i] = data;
		cout << arr[i] << endl;
	}
	read_file.close();*/

	

	system("pause");
	return 0;
}