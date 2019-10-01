/*1. Перевірка паролів. Уявіть, що ви розробляєте програмний пакет, який вимагає від користувачів введення власних паролів. Програмне забезпечення вимагає, щоб паролі користувачів відповідали наступним критеріям:
а. Пароль повинен бути не менше шести символів.
б. Пароль повинен містити принаймні одну велику і малу літери.
c. Пароль повинен мати принаймні одну цифру.
Напишіть програму, яка запитує пароль, а потім перевіряє, чи відповідає вона зазначеним критеріям. Якщо це не так, програма повинна відображати повідомлення, яке повідомляє користувачеві чому*/
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(unsigned(time(NULL)));
	char password[255] = {};
	int trouble[4];
	for (int i = 0; i < 4; i++) {
		trouble[i] = 0;
	}
	cout << "Enter your password" << endl;
	
	for (int i = 0; i<7; i++) {
		cin >> password;
		if (strlen(password) >= 6) {
			trouble[0] = 1;
		}
		 if (int(password) >= 97 && int(password) <= 122 ) {
			trouble[1] = 2;
		}
		 if(int(password) >= 65 && int(password) <= 90){
			trouble[2] = 3;
           }
		 if (int(password) >= 48 && int(password) <= 57) {
			trouble[3] = 4;
		}
	}
	if (trouble[0]==0) {
		cout << "Your password must have minimum six litters " << endl;
	}
	 if (trouble[1] == 0) {
		cout << "Your password must have just one litter " << endl;
	}
	 if (trouble[2] == 0) {
		cout << "Your password must have just one big litter " << endl;
	}
	 if (trouble[3] == 0) {
		cout << "Your password must have just one digit " << endl;
	}
	

	system("pause");
	return 0;
}
