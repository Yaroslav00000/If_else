#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	cout << "������ �����, ��� ��������� ����: ";
	cin >> x;
	if (x > 0) {
		cout << "����� �������";
	}
	else if (x < 0) {
		cout << "����� ��'����";
	}
	else {
		cout << "����� ������� ����";
	}

    system("pause");
    return 0;
}
