#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	cout << "¬вед≥ть число, щоб перев≥рити його на парн≥сть: ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "„исло парне";
	}
    system("pause");
    return 0;
}
