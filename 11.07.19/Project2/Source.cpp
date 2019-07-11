//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 5, Col = 4;
//	int arr[Row][Col],arr2[2][Col];
//	srand(unsigned(time(NULL)));
//
//	for (int i = 0; i < Row; i++) {
//		for (int j = 0; j < Col; j++) {
//			arr[i][j] = rand() % 40 +- 20;
//			cout <<"   Row   "<<i+1<<"  "<< arr[i][j]<<endl;
//			arr2[0][j] = arr[0][j];
//			arr2[1][j] = arr[4][j];
//		}
//		cout << endl;
//	}
//	for (int j = 0; j < Col; j++) {
//		arr[0][j] = arr2[1][j];
//		arr[4][j] = arr2[0][j];
//	}
//	cout << "=======================After======================" << endl;
//	for (int i = 0; i < Row; i++) {
//		for (int j = 0; j < Col; j++) {
//			cout << "   Row   " << i + 1 << "  " << arr[i][j] << endl;
//		}
//		cout << endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}


//1. Написать профамму, которая вычисляет среднее арифметическое последовательности дробных чисел, вводимых с клавиатуры.
//После ввода последнего числа программа должна вывести минимальное и максимальное число.
//#include <iostream>
//using namespace std;
//int main() {
//	float digit = 0, max = 0, member = 0, min = 0, arifm = 0;
//	cout << " Enter the five digit: " << endl;
//	for (int i = 0; i <5; i++) {
//		cout << i + 1 << ".  ";
//		cin >> digit;
//		if (digit > max) {
//			max = digit;
//		}
//		if (i==0) {
//			min = digit;
//		}
//		else if (min > digit) {
//			min = digit;
//		}
//		arifm = arifm + digit;
//	}
//	cout << " Midlle arifmetic : " << arifm / 5 << endl;
//	cout << " Maximum digit are : " << max << endl;
//	cout << " Mimimum digit are : " << min << endl;
//
//	system("pause");
//	return 0;
//}

//2.  Напишите программу, которая выводит на экран таблицу умножения, например, на число введенное с клавиатуры.
//#include <iostream>
//using namespace std;
//int main() {
//	int digit = 0,eqwel=0;
//	cout << " Enter your digit ";
//	cin >> digit;
//	for (int i = 1; i != 10;i++) {
//		eqwel = digit * i;
//		cout << digit << "x" << i <<" = "<<eqwel <<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//3. Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, после чего выводит количество ненулевых элементов.
//Перед вводом каждого элемента должна выводиться подсказка с номером индекса элемента.
//#include <iostream>
//using namespace std;
//int main() {
//	const int Row = 5;
//	int arr[Row];
//	int index = 0;
//	
//	for (int i = 0; i < Row; i++) {
//		cout << "   Row " << i + 1 << ".  ";
//		cin >> arr[i];
//			
//		if (arr[i]>0) {
//			index++;
//	     }
//	}
//	cout << " Unzero element : " << index << endl;
//
//	system("pause");
//	return 0;
//}

//4. Написать профамму, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива
//целых чисел.
// #include <iostream>
//using namespace std;
//int main() {
//	const int Row = 5;
//	int arr[Row];
//	int index = 0,arifm=0;
//	
//	for (int i = 0; i < Row; i++) {
//		cout << "   Row " << i + 1 << ".  ";
//		cin >> arr[i];
//			
//		if (arr[i]>0) {
//			arifm = arifm + arr[i];
//			index++;
//	     }
//	}
//	cout << " Midlle arifmetic : " << arifm/index << endl;
//
//	system("pause");
//	return 0;
//}

//5. Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и максимального элементов массива.
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 10;
//	int arr[Row];
//	int index_max = 0, index_min = 0,max=0,min=0,index=0;
//	float arifm = 0;
//	srand(unsigned(time(NULL)));
//	
//	for (int i = 0; i < Row; i++) {
//		arr[i] = rand() % 10;
//		cout << "   Row " << i + 1 << ".  " << arr[i]<<endl;
//		if (arr[i] > max) {
//			max = arr[i];
//			index_max = i;
//		}
//		if (i == 0) {
//			min = arr[i];
//			index_min = i;
//		}
//		else if (min > arr[i]) {
//			min = arr[i];
//			index_min = i;
//		}
//	}
//	for (int i = 0; i < Row; i++) {
//		if (i != index_min && i!= index_max) {
//			arifm = arifm + arr[i];
//			index++;
//		}
//	}
//	cout << " Midlle arifmetic : " << arifm/index << endl;
//
//	system("pause");
//	return 0;
//}

//6. Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве.Массив заполнять через rand().
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 10;
//	int arr[Row];
//	int digit=0;
//	srand(unsigned(time(NULL)));
//	bool task= false;
//	
//	for (int i = 0; i < Row; i++) {
//		arr[i] = rand() % 10;
//		cout << "   Row " << i + 1 << ".  " << arr[i]<<endl;
//	}
//	cout << " Enter your digit ";
//	cin >> digit;
//	for (int i = 0; i < Row; i++) {
//		if (digit==arr[i]) {
//			task = true;
//		}
//	}
//	if (task == true) {
//		cout << " Are your digit into this matrix? True" << endl;
//	}
//	else {
//		cout << " Are your digit into this matrix? False"  << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

//7. Написать программу, которая создает масив с 10 случайных элементов.Сортировать масив методом "пузырька".Отсортированный масив замисать в миссыв sorted.
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 10;
//	int arr[Row],sorted[Row];
//	int digit=0;
//	srand(unsigned(time(NULL)));
//	
//	for (int i = 0; i < Row; i++) {
//		arr[i] = rand() % 100;
//		cout << "   Row " << i + 1 << ".  " << arr[i]<<endl;
//	}
//	
//	for (int i = Row - 1; i >= 1; i--) {
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i <Row ; i++) {
//		sorted[i]=arr[i] ;
//	}
//	cout << "====================Sorted==================="<<endl;
//	for (int i = 0; i < Row; i++) {
//		cout << "   Row " << i + 1 << ".  " << sorted[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//8. Написать программу, которая определяет номер строки квадратной матрицы, сумма элементов которой максимальна.
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main() {
//	const int Row = 5,Col=5;
//	int arr[Row][Col];
//	int sum = 0,sum_max=0,index=0;
//	srand(unsigned(time(NULL)));
//	
//	for (int i = 0; i < Row; i++) {
//		for (int j = 0; j < Col; j++) {
//			arr[i][j] = rand() % 100;
//			cout << "   Row " << i + 1 << ".  " << arr[i][j] << endl;
//		}
//		cout << endl;
//	}
//
//	cout << "======================Sum=====================" << endl;
//	for (int i = 0; i < Row; i++) {
//		sum = 0;
//		for (int j = 0; j < Col; j++) {
//			sum =sum+ arr[i][j];
//		}
//		if (sum_max < sum) {
//			sum_max = sum;
//			index = i;
//		}
//		cout <<i+1<<" Sum = " <<sum << endl;
//	}
//
//	cout << "=====================Row of max sum======================"<<endl;
//	cout << " Number of Row,whith maximum sum "<<index+1 << endl;
//	
//
//	system("pause");
//	return 0;
//}