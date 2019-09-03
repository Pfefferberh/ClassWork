//Дано два масива : А[n] и B[m].Утворити третій масив мінімального можливого розміру, у якому зібрати :
//Елементи обох масивів;
//Спільні элементи обох массивов;
//Елементи масиву A, які не зустрічаються у B;
//Елементи масиву В, які не зустрічаються у А;
//Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).

#include <iostream>
#include <ctime>

using namespace std;

void Fill(const int SIZE, int arr[]);
void Fill(const int memb, const int SIZEa, int arrA[], int arrB[], int arr[]);
void Print(const int SIZE, int arr[]);
int Arr3(const int SIZEa, const int SIZEb, int arrA[], int arrB[]);

int main() {
	srand(unsigned(time(NULL)));
	const int SIZEa = 5;
	const int SIZEb = 4;

	int arrA[SIZEa], arrB[SIZEb],arr[SIZEa+ SIZEb];

	cout << "--------------Array A-----------------" << endl;
	Fill(SIZEa, arrA);
	Print(SIZEa, arrA);
	cout << "==============Array A=================" << endl;

	cout << "--------------Array B-----------------" << endl;
	Fill(SIZEb, arrB);
	Print(SIZEb, arrB);
	cout << "==============Array B=================" << endl;

	Arr3(SIZEa,SIZEb,arrA,arrB);
	int memb = Arr3(SIZEa, SIZEb, arrA, arrB);
	Fill(memb, SIZEa, arrA, arrB, arr);
	Print(memb, arr);

	system("pause");
	return 0;
}

void Fill(const int SIZE, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 15;
	}
}
void Fill(const int memb, const int SIZEa, int arrA[],int arrB[],int arr[]) {
	int h = 0;
	for (int i = 0; i < memb; i++) {
		if (i!=SIZEa) {
			arr[i] = arrA[i];
		}
		 if (i >= SIZEa) {
			
			arr[i] = arrB[h];
			h++;
		}
	}
}

void Print(const int SIZE, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		cout<<i<<" ["<<arr[i]<<"] " << endl;
	}
}

int Arr3(const int SIZEa, const int SIZEb, int arrA[], int arrB[]) {

	int counter = 0;
	for (int i = 0;i<SIZEa;i++) {
		for (int j = 0; j < SIZEb; j++) {
			if (arrA[i] == arrB[j]) {
				counter++;
				
			}
		}
	 }
	cout <<"counter=" <<counter << endl;
	int SIZE = SIZEa + SIZEb+counter;

	return SIZE;
}