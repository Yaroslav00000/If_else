#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	cout << "������ �����, ��� ��������� ���� �� �������: ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "����� �����";
	}
    system("pause");
    return 0;
}
