//#include <iostream>
//using namespace std;
//
//int main() {
//	char text;
//	int a=0;
//	int o=0;
//	bool exit = true;
//	for (int i = 0; exit==true;i++) {
//		cin >> text;
//		if (text =='a') {
//			a++;
//		}
//		else if (text == 'o') {
//			o++;
//		}
//
//		if (text =='0') {
//			exit = false;
//	    }
//	}
//	cout << " a= "<<a << endl;
//	cout << " o= "<<o << endl;
//	if (a>o) {
//		cout << " a= " << a << endl;
//	}
//	else if (a < o) {
//		cout << " o= " << o << endl;
//	}
//	
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	char text;
//	int litera = 0;
//	int digit = 0;
//	int sumbol = 0;
//	bool exit = true;
//	for (int i = 0; exit == true; i++) {
//		cin >> text;
//		if (int(text)>=97&& int(text)<=122) {
//			litera++;
//		}
//		else if (int(text) >= 48 && int(text) <= 57) {
//			digit++;
//		}
//		else if (int(text) == 44 && int(text) == 46 && int(text) == 33 && int(text) == 63) {
//			sumbol++;
//		}
//		if (text == '0') {
//			exit = false;
//		}
//	}
//	cout << " litera= " << litera << endl;
//	cout << " digit= " << digit << endl;
//	cout << " sumbol= " << sumbol << endl;
//	
//
//	system("pause");
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main() {
//	char text;
//	int digit = 0;
//	int res = 0;
//	bool exit = true;
//	for (int i = 0; exit == true; i++) {
//		cin >> text;
//		digit = int(text);
//		res = res + digit;
//		if (text == '0') {
//			exit = false;
//		}
//	}
//	cout << " res= " << res << endl;
//
//	system("pause");
//	return 0;
//}

//////
//////
//////
//////#include <iostream>
//////using namespace std;
//////
//////int main() {
//////	char text;
//////	int digit = 0;
//////	int size =0;
//////	char *arrtext = new char[size];
//////
//////	bool exit = true;
//////	for (int i = 0; i<5; i++) {
//////		
//////			size++; 
//////			cin >> arrtext[i];
//////		
//////			////arr[i] = int(text);
//////			//cout << " arr= " << arr[i] << endl;
//////			//cout << " &arr= " << &arr[i] << endl;
//////		
//////			
//////		
//////	}
//////	for (int i = 0; i < size; i++) {
//////		cout << i + 1 << ". [" << arrtext[i] << "] " << endl;
//////	}
//////	
//////	delete[] arrtext;
//////	arrtext = nullptr;
//////	system("pause");
//////	return 0;
//////}
