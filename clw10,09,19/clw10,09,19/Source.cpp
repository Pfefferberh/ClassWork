//Написати функцію(або шаблон функції), яка приймає два вказівника і повертає вказівник на менше число.За допомогою функції :
//Вивести на екран менше з двох введених чисел
//Збільшити на 10 менше число.
//#include <iostream>
//#include<ctime>
//
//using namespace std;
//
//void Func(int *pA, int *pB);
//
//int main() {
//	srand(unsigned(time(NULL)));
//
//	int*pA=new int ;
//	int*pB=new int ;
//	
//	*pA = rand() % 10;
//	*pB = rand() % 10;
//	Func(pA, pB);
//
//	delete pA;
//	delete pB;
//
//
//	pA = nullptr;
//	pB = nullptr;
//
//	system("pause");
//	return 0;
//}
//
//void Func(int *pA, int *pB) {
//	if (*pB < *pA) {
//		cout << "max pA "<<*pA<< endl;
//		cout << "    pB " << *pB << endl;
//		cout << "    pA+10 " << *pA+10 << endl;
//	}
//	else if(*pA > *pB){
//		cout << "max pB " << *pB << endl;
//		cout << "    pA " << *pA << endl;
//		cout << "    pB+10 " << *pB + 10 << endl;
//	}
//	else {
//		cout << "=======================" << endl;
//	}
//}

//Написати функцію, яка отримує 2 вказівники на змінні і виконує обмін значеннями між змінними.
//Перевірити роботу функції для двох змінних.
//Перевірити роботу функції для того, щоб поміняти місцями у одновимірному масиві перший елемент з другим, третій з четвертим і т.д
//Перевірити роботу функції для того, щоб обернути масив.

#include <iostream>
#include <ctime>
using namespace std;

void ExChange(int *pA, int *pB);
void ExChange(const int SIZE, int arr[]);
void ExChange2(const int SIZE, int arr[]);
void Fill(const int SIZE, int arr[]);
void Print(const int SIZE, int arr[]);

int main() {
	srand(unsigned(time(NULL)));
	int a = rand() % 10;
	int b = rand() % 10;
	const int SIZE = 5;
	int arr[SIZE];

	int*pA = &a;
	int*pB = &b;
	cout << "pA ->" << *pA << endl << "pB ->" << *pB << endl;
	cout << "----------------------------------------" << endl;
	 ExChange(pA,  pB);
	cout << "pA ->" << *pA << endl << "pB ->" << *pB << endl;
	 Fill( SIZE, arr);
	Print( SIZE, arr);
	cout << "--------------------1--------------------" << endl;
	ExChange(SIZE, arr);
	Print(SIZE, arr);
	cout << "---------------------2-------------------" << endl;
	ExChange2(SIZE, arr);
	Print(SIZE, arr);

	system("pause");
	return 0;
}

void ExChange(int *pA, int *pB) {
	int i = 0;
	i = *pA;
	*pA = *pB;
	*pB = i;
}
void ExChange(const int SIZE, int arr[]) {
	int memb = 0;
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0 && i != SIZE - 1) {
			memb = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = memb;
		}
	}
}
//void ExChange2(const int SIZE, int arr[]) {
//	bool gg = false;
//	for (int i = 0; i < 3; i++) {
//		 gg= false;
//		for (int j = SIZE-1; gg!=true; j--) {
//
//			arr[i] = arr[j];
//			
//			gg = true;
//		}
//	}
//}
void Fill(const int SIZE, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(const int SIZE, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
	cout<<i+1<<"arr["<<	arr[i]<<"]" <<endl;
	}
}