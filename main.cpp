#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int x;
	cout << "¬вед≥ть число, щоб перев≥рити його: ";
	cin >> x;
	if (x > 0) {
		cout << "„исло додатне";
	}
	else if (x < 0) {
		cout << "„исло в≥д'Їмне";
	}
	else {
		cout << "„исло дор≥внюЇ нулю";
	}

    system("pause");
    return 0;
}
