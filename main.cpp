#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	int two;
	cout << "������ ����� �����: ";
	cin >> x;
	cout << "������ ����� �����: ";
	cin >> two;
	if (x > two) {
		cout << two;
	}
	else {
		cout << x;
	}
	cout << endl;

    system("pause");
    return 0;
}
