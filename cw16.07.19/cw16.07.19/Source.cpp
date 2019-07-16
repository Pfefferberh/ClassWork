////Write a function that receives as two integers a parameter and returns the sum of the numbers in the range between them.
//#include <iostream>
//using namespace std;
//
//int sum(int a, int b) {
//	int res = a;
//	for (int i = b;a!=i; i--) {
//		res = res + i;
//	}
//	return res;
//}
//
//
//
//int main() {
//	int dig1 = 0, dig2 = 0,result=0;
//	cout << " Enter the two digit please : " << endl;
//	cout << " First : ";
//	cin >> dig1;
//	cout << " Second : ";
//	cin >> dig2;
//	result =sum(dig1,dig2);
//	cout << " Result " << result << endl;
//	system("pause");
//	return 0;
//}

//Написати функцію, яка обчислює вартість поїздки на автомобілі на дачу(туди і назад).
//Вхідними даними є : відстань до дачі(км); кількість бензину, яку споживає автомобіль на 100 км пробігу; ціна одного літру бензину.Дані для розрахунків вводяться користувачем.
#include <iostream>
using namespace std;

float sum(int a, float b,float c) {
	 
	float res = 0, litrKm = 0;
	litrKm = b / 100;
		res = a*litrKm*c*2;
	return res;
}

int main() {
	int dist = 0;
	float coast = 0,result=0, benz = 0;
	cout << " Enter the lenght please : " ;
	cin >> dist;
	cout << " Enter the benzun on 100 km : ";
	cin >> benz;
	cout << " Enter the coast 1 litre to benzun : ";
	cin >> coast;
	result = sum(dist, benz,coast);
	cout << " You must to pay " << result << endl;
	system("pause");
	return 0;
}