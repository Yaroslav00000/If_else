#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int max_number = INT_MIN;

    for (int i = 0; i < 7; ++i) {
        int number;
        cout << "Введіть " << i + 1 << "-е число: ";
        cin >> number;

        if (number > max_number) {
            max_number = number;
        }
    }

    cout << "Максимальне число: " << max_number << endl;

    system("pause");
    return 0;
}
