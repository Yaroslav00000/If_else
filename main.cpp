#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int max_number = INT_MIN;

    for (int i = 0; i < 7; ++i) {
        int number;
        cout << "������ " << i + 1 << "-� �����: ";
        cin >> number;

        if (number > max_number) {
            max_number = number;
        }
    }

    cout << "����������� �����: " << max_number << endl;

    system("pause");
    return 0;
}
