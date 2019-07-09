//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 3,Kol=4;
//	int arr[Row][Kol];
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < Row; i++) {
//		for (int j = 0; j < Kol; j++) {
//			arr[i][j] = rand() % 20 + 1;
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < Row; i++) {
//		for (int j = 0; j < Kol; j++) {
//			cout << "arr  [" << i << "] [" << j << "] - " <<arr[i][j]<< endl;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 10,Kol=11;
//	int arr[Row][Kol];
//	int sum = 0;
//	srand(unsigned(time(NULL)));
//
//	for (int i = 1; i < Row; i++) {
//		for (int j = 1; j < Kol; j++) {
//			sum = i * j;
//			cout << "arr  [" << i << "] * [" << j << "] - " <<sum<< endl;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int Row = 5,Kol=4;
	int arr[Row][Kol];
	int raxFor0 = 0,ii=0,jj=0;
	float midleAr = 0;
	char gg = 'bb';
	srand(unsigned(time(NULL)));
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
			arr[i][j] = rand() % 40 +- 20;
		}
	}

	cout << "--------------- Array 5x4  -------------------" << endl;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
			cout << "arr  [" << i << "] [" << j << "] = " << arr[i][j] << endl;
		}
		cout << endl;
	}
	cout << "--------------- END -------------------" << endl << endl;


	cout << "\n-------------------- Kilkist elementiv rivnuh 0 ----------------" << endl;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
			if (arr[i][j] == 0) {
				raxFor0++;
			}
		}
	}
	cout << "Kilkist elementiv rivnuh 0 : " << raxFor0 << endl;


	cout << "\n--------------------Midle arifmetic ----------------" << endl;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
			midleAr = midleAr + arr[i][j];
		}
			cout << "Midle arifmetic "<<i <<" : "<< midleAr/Kol << endl;
	}
	

	cout << "\n--------------------Your digit ----------------" << endl;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
		}
	}
	cout << "Enter number the row: ";
	cin >> ii;
	cout << "Enter number the col: ";
	cin >> jj;
	if (ii > 4 && jj > 3) {
		cout << " wrong diapazon " << endl;
	}
	else {
		cout << "arr  [" << ii << "] [" << jj << "] = " << arr[ii][jj] << endl;
	}
	
		int tmp = 0;
	int i_revers,p=0;
	tmp = Row-1;
	 for (i_revers = 0;i_revers!=tmp; i_revers++) {
		 for (int t = 0; t < Kol; t++) {
			 p = arr[i_revers][t];
			 arr[i_revers][t] = arr[tmp][t];
			 arr[tmp][t] = p;
		 }
			 tmp--;
	  }

	cout << "----------------------After-------------------->" << endl;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Kol; j++) {
			cout << "arr  [" << i << "] [" << j << "] = " << arr[i][j] << endl;
		}
		cout << endl;
	}
	

	system("pause");
	return 0;
}