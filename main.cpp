#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	int two;
	cout << "¬вед≥ть перше число: ";
	cin >> x;
	cout << "¬вед≥ть друге число: ";
	cin >> two;
	if (x == two) {
		cout << "„исла р≥вн≥";
	}
	else if (x > two) {
		cout << two << " " << x;
	}
	else {
		cout << x << " " << two;
	}
	cout << endl;

    system("pause");
    return 0;
}
