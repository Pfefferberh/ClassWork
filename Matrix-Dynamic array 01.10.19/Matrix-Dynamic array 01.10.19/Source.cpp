#include <iostream>
#include <ctime>
using namespace std;

void create_array(int**&arr, int row, int col);
void delete_array(int**&arr, int row);
void Fill_array(int**&arr, int row, int col);
void Print_array(int**&arr, int row, int col);

int main() {
	srand(unsigned(time(NULL)));
	
	int **arr = NULL;

	int col = 0, row = 0;
	cout << "Enter row and col" << endl;
	cin >> row >> col;
	create_array(arr,row, col);
	Fill_array(arr,  row,  col);
	Print_array(arr, row,  col);
	delete_array(arr, row);

	system("pause");
	return 0;
}
void create_array(int**&arr,int row,int col) {
	arr = new int*[row];
	for (int i = 0; i < row;i++) {
		arr[i] = new int[col];
	}
}
void delete_array(int**&arr,int row) {
	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}


void Fill_array(int**&arr,int row,int col) {
	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
}

void Print_array(int**&arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout<<arr[i][j]<<"  " ;
		}
		cout << endl;
	}
}