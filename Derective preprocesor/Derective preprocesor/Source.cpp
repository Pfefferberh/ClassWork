////Написати програму, яка знаходить суму елементів масиву.Розмір масиву є константою, яка оголошена на рівні препроцесора
#include <iostream>
#include <ctime>


#define  SIZE 5

using namespace std;


int main() {
	srand(unsigned(time(NULL)));
//#ifdef DEBUG
//	const int SIZE = 5;
//#endif 

	/*int arr[SIZE];
	int suma=0;
	for (int i = 0; i < SIZE;i++) {
		arr[i] = rand() % 10 + 1;
		suma+=arr[i];
	}
	for (int i = 0; i < SIZE; i++) {
		cout<<" ["<<arr[i]<<"] " <<endl;
	}*/

	system("pause");
	return 0;
}

