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
	if (x == two) {
		cout << "����� ���";
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
