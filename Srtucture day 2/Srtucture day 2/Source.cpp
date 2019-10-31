//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Book
//{
//	string title;
//	string author;
//	int pages;
//	int price;
//
//	void ShowBookInfo() {
//		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
//		cout << "\nTitle: " << title << "\nAuthor: " << author << "\nPages: " << pages << "\nPrice: " << price << endl;
//		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
//	}
//};
//
//void CreateBookCollection(Book *books, const int booksCount) {
//
//	for (int i = 0; i < booksCount; i++) {
//		cout << "Create book number: => " << i + 1 << endl;
//		cout << "Book title: =>" << endl;
//		cin >> books[i].title;
//		cout << "Book author: =>" << endl;
//		cin >> books[i].author;
//		cout << "Pages: =>" << endl;
//		cin >> books[i].pages;
//		cout << "Book price: =>" << endl;
//		cin >> books[i].price;
//		cout << "<===================================>" << endl;
//		cout << "<=============Book added! ==========>" << endl;
//		cout << "<===================================>" << endl;
//	}
//}
//
//void ShowBook(Book *books, const int booksCount) {
//	for (int i = 0; i < booksCount; i++) {
//		books[i].ShowBookInfo();
//	}
//}
//
//
//	void SortByPrice(Book *books, int bookCount) {
//		for (int i = 0; i < bookCount-1; i++) {
//			for (int j = 0; j < bookCount-i-1; j++) {
//				if (books[j].price > books[j + 1].price) {
//					swap(books[j], books[j + 1]);
//				}
//			}
//		}
//	}
//
//
//int main() {
//
//	int booksCount = 0;
//	cout << "Enter books count: " << endl;
//	cin >> booksCount;
//
//	Book *books = new Book[booksCount];
//	CreateBookCollection(books, booksCount);
//	ShowBook(books, booksCount);
//	cout << "*-********************-----------------------***********" << endl;
//	SortByPrice(books, booksCount);
//	ShowBook(books, booksCount);
//
//	system("pause");
//	return 0;
//}

//??????? ????????? «??????».???????????:
//?????????? ?????? ?????
//????? ?????????? ? ??????????? ?? ???????? ?? ?????
//????? ?????? ????????? ?????? ? ????????? ???? ??????????
//????? ??????? ?????? ??? ????????? ?? ?????????? ???????
//????? ?? ???????? ?? ?????
//??????????? ??????

#include <iostream>
#include <string>

using namespace std;

struct man
{
	string name;
	string surname;
	struct { int day; int month; int year; }data;
	void ShowBookInfo() {
				cout << "<---------------------------------------------------------------------------->" << endl;
				cout << "\name: " << name << "\surname: " << surname << "\day: " << data.day << "\month: " << data.month << "\year: " << data.year<< endl;
				cout << "<---------------------------------------------------------------------------->" << endl;
			}

};

void Create(man *people, const int peopleCount) {

	for (int i = 0; i < peopleCount; i++) {

		cout << "<==================" << i + 1 << "=================>" << endl;
		cout << "Create parson number: => " << i + 1 << endl;
		cout << " Name: =>" << endl;
		cin >> people[i].name;
		cout << "Surname: =>" << endl;
		cin >> people[i].surname;
		cout << "Birthday " << endl;
		cout << "Day : =>" << endl;
		cin >> people[i].data.day;
		cout << "Month: =>" << endl;
		cin >> people[i].data.month;
		cout << "Year: =>" << endl;
		cin >> people[i].data.year;

		cout << "<=================="<<i+1<<"=================>" << endl;
	}
}
void ShowBook(man *people, const int peopleCount) {
		for (int i = 0; i < peopleCount; i++) {
			people[i].ShowBookInfo();
		}
	}
int maun(){

	int peopleCount = 0;
		cout << "Enter people count: " << endl;
		cin >> peopleCount;
	
		man *people = new man[peopleCount];
		Create(people, peopleCount);
		ShowBook(people, peopleCount);
	


	system("pause");
	return 0;
}
