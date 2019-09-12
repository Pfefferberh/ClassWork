//Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Функція повертає адресу створеного масиву.
//Виводу масиву
//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//Видалення елемента за вказаною позицією.
//Вставка нового елемента у довільну допустиму позицію у масиві
//Меню

#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int *psize);
void FillArr(const int size, int arr[]);
void Print(const int size, int* arr);
void repeatArray(int*&arr, int &size);

int main() {
	srand(unsigned(time(NULL)));
	int size = 0;
	
	int* psize = &size;
	FillArr(psize);
	int *arr=new int [size];


	
	FillArr(size, arr);
	
	Print(size, arr);
	repeatArray(arr, size);
	Print(size, arr);

	delete [] arr;
	arr = nullptr;

	system("pause");
	return 0;
}
void FillArr( int *psize) {
	cout << "Enter size the array ";
	cin >> *psize;
}
void FillArr(const int size,int arr[]) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		
	}

}
void Print(const int size, int *arr) {
	for (int i = 0; i < size; i++) {
		cout<<arr[i]<<" ";
	}
	cout << endl;
}
void repeatArray(int*&arr, int &size) {
	int newSize = size + 1;
	int* newArray = new int[newSize];
	for (int i = 0; i <= size; i++) {
		if(i==size){
			cout << "Enter new element ";
			cin >> newArray[i];
		}
		else
		{
			newArray[i] = arr[i];
		}
	}
	delete[] arr;
	arr = newArray;
	
	size++;
}

