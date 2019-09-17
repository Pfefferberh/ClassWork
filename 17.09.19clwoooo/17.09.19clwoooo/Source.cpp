#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int* psize);
void FillArr(const int size, int arr[], int* pRandElem);
void Print(const int size, int* arr);
void repeatArray(int*& arr, int& size, int * pRandElem);
void repeatArray(int*& arr, int& size);
void deleteArray(int*& arr, int& size);
void AddBlockArray(int*& arr, int& size);
void Meny(int*& arr, int& size, int* psize, int* pRandElem);

int main() {
	srand(unsigned(time(NULL)));
	int size = 0;
	int RandElem = 0;

	int* psize = &size;
	int* pRandElem = &RandElem;

	cout << "------------------------------------------Welocome!----------------------------------------" << endl;
	cout << "                 You having a chance to work with array. But before you start ,\n                              you must create a new array ." << endl;

	FillArr(psize);
	int* arr = new int[size];
	FillArr(size, arr, pRandElem);
	Meny(arr, size, psize, pRandElem);


	delete[] arr;
	arr = nullptr;

	system("pause");
	return 0;
}
void FillArr(int* psize) {
	cout << " Enter size the array --> ";
	cin >> *psize;
}
void FillArr(const int size, int arr[], int* pRandElem) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
	*pRandElem = rand() % 10 + 1;
}
void Print(const int size, int* arr) {
	cout << "                     Array :                  " << endl;
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ". [" << arr[i] << "] " << endl;
	}
	cout << endl;
}
void repeatArray(int*& arr, int& size, int* pRandElem) {
	int newSize = size + 1;
	int* newArray = new int[newSize];
	for (int i = 0; i <= size; i++) {
		if (i == size) {
			cout << " Rand new element --> " << *pRandElem << endl;
			newArray[i] = *pRandElem;
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
void repeatArray(int*& arr, int& size) {
	int position = 0;
	int newSize = size + 1;
	int* newArray = new int[newSize];
	cout << " Enter the position for new element --> ";
	cin >> position;
	position--;
	if (position > size || position <= 0) {
		cout << "*******************************Error************************************* " << endl;
	}
	else {
		for (int i = 0; i <= size; i++) {
			if (i == position) {
				cout << " Enter new element --> ";
				cin >> newArray[i];
			}
			else if (i > position) {
				newArray[i] = arr[i - 1];
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

}
void AddBlockArray(int*& arr, int& size) {
	int position1 = 0;
	int position2 = 0;
	int newSize = size ;
	int* newArray = new int[newSize];
	cout << " Enter the position for block elements --> ";
	cin >> position1;
	position1--;
	cout << " Enter the count elements of block --> ";
	cin >> position2;
	if (position1 > size || position1 <= 0) {
		cout << "*******************************Error************************************* " << endl;
	}
	else {
		for (int i = 0; i <= size; i++) {
			if (i == position1) {
				for (int j = 0; j < position2; j++) {
					cout << " Enter new element for position "<<j+i+1 <<" --> ";
					cin >> newArray[j+ position1];
					size++;
				}
			}
			else if (i > position1) {
				newArray[i+ position2-1] = arr[i - 1];
			}
			else
			{
				newArray[i] = arr[i];
			}
		}
		delete[] arr;
		arr = newArray;
	}

}
void deleteArray(int*& arr, int& size) {
	int position = 0;
	int* newArray = new int[size];
	cout << " Enter the position for delete element --> ";
	cin >> position;
	position--;
	if (position > size +1 || position <= 0) {
		cout << "*******************************Error************************************* " << endl;
	}
	else {
		for (int i = 0; i <= size - 1; i++) {
			if (i >= position) {
				newArray[i] = arr[i + 1];
			}
			else if (position > i) {
				newArray[i] = arr[i];
			}
		}
		delete[] arr;
		arr = newArray;

		size--;
	}

}
void Meny(int*& arr, int& size, int*psize, int* pRandElem) {
	char meny = 0;
	bool exit = true;
	cout << "============================= Choise the operation in meny ==============================" << endl;
	for (int i = 0; exit == true; i++) {
		cout << " Create new array    --> '1'                                           array <" << *psize << "> elements" << endl;
		cout << " Print the array     --> '2' " << endl;
		cout << " Add randome element --> '3' " << endl;
		cout << " Add new element     --> '+' " << endl;
		cout << " Delete the element  --> '-' " << endl;
		cout << " Add block elements  --> '*' " << endl;
		cout << " Exit                --> '0' " << endl;
		cin >> meny;
		switch (meny)
		{
		case '1':
			FillArr(psize);
			FillArr(size, arr, pRandElem);
			break;
		case '2':
			Print(size, arr);
			break;
		case '3':
			repeatArray(arr, size, pRandElem);
			break;
		case '+':
			repeatArray(arr, size);
			break;
		case '-':
			deleteArray(arr, size);
			break;
		case '*':
			AddBlockArray(arr, size);
			break;
			
		case '0':
			exit = false;
			break;
		default:
			cout << "Smth wrong" << endl;
			break;
		}
		cout << "                    ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~                            " << endl;
	}
}