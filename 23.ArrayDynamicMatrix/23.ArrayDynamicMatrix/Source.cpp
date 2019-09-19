//Написати функції для роботи з динамічною матрицею :
//Функція створення динамічної матриці розміром row x col, де row та col - аргументи функції.Функція повертає адресу створеної матриці(або адреса матриці передається по ссилці).
//Функція заповнення матриці
//Функція виводу матриці
//Функція доповнення матриці новим рядком
//Функція видалення з матриці рядка за вказаним номером
//Функція вставки нового рядка за вказаним номером
//Функція доповнення матриці новим стовпчиком
//Функція видалення з матриці стовпця за вказаним номером
//Функція вставки нового стовпця за вказаним номером

#include <iostream>
#include <ctime>

using namespace std;

void Create(int**arr, int &row, int &col);
void FullArray(int**arr, int &row, int &col);
void Print(int**arr, int &row, int &col);
void Add(int**arr, int &row, int &col);
void clean(int**arr,int&row);

int main() {
	srand(unsigned(time(NULL)));
	system("color 2");

	int col, row;
	cout << "Enter matrix size: [row first] => " << endl;
	cin >> row >> col;

	int **arr = new int *[row];
	Create(arr, row, col);
	FullArray(arr, row, col);
	Print(arr, row, col);
	Add(arr, row, col);
	Print(arr, row, col);
	
	for (int i = 0; i < row; i++) {
			delete[] arr[i];
	}

	delete[] arr;
	arr = nullptr;

	system("pause");
	return 0;
}

void Create(int**arr,int &row,int &col) {
	
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
}
void FullArray(int**arr, int &row, int &col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 9 + 1;
		}
	}
}
void Print(int**arr, int &row, int &col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << " " << arr[i][j];
		}
		cout << endl;
	}
}
void Add(int**arr, int &row, int &col) {
	int newSize = row + 1;
	int **arrMEMB = new int *[newSize];
	Create(arrMEMB, newSize, col);
	for (int i = 0; i < newSize; i++) {
		for (int j = 0; j < col; j++) {
			if (i<row) {
				arrMEMB[i][j] = arr[i][j];	
			}
			else {
				arrMEMB[i][j] = rand() % 9 + 1;
			}
		}
	}
	
	cout << &arr <<endl<< &arrMEMB << endl;
	clean(arr, row);
	row++;
	arr = arrMEMB;
	cout << &arr <<endl<< &arrMEMB << endl;
	system("pause");
}
void clean(int**arr,int&row) {
	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}