#include <iostream>
#include <string>

using namespace std;

struct Washin_mashin  // Create new Structure
{
	string firme;
	string color;
	int weiht;
	int leng;
	int hight;
	int power;
	int speed;
	int temputature;

};
void CreateLibrary(Washin_mashin &WM) {
	cout << "Mashine name?" << endl;
	cin >> WM.firme;
	cout << " Color " << endl;
	cin >> WM.color;
	cout << "leng" << endl;
	cin >> WM.leng;
	cout << "hight" << endl;
	cin >> WM.hight;
	cout << "power" << endl;
	cin >> WM.power;
	cout << "speed" << endl;
	cin >> WM.speed;
	cout << "temputature" << endl;
	cin >> WM.temputature;
}

void Print(Washin_mashin &WM) {
	cout << "Model : " << WM.firme<<endl;
	cout << " Color : "<< WM.color<<endl;
	cout << " leng : " <<WM.leng  <<endl;
	cout << " hight : "<< WM.hight<<endl;
	cout << " power : "<< WM.power<<endl;
	cout << " speed : "<< WM.speed<<endl;
	cout << " temputature : "<<WM.temputature<<endl;
}

int main() {

	//Washin_mashin WM;
	//CreateLibrary( WM);
	cout << "   /||||\\    /||||\\     /||||\\     /||||\\     /||||\\     /||||\\  " << endl;
	cout << "  | -__- |  | -__- |   | -__- |   | -__- |   | -__- |   | -__- |  " << endl;
	cout << "  \\______/   \\____/    \\______/    \\____/    \\______/    \\____/  " << endl;
	//Print( WM);
	
	system("pause");
	return 0;
}


