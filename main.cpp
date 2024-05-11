#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number,number1, number2, number3, number4, new_number;
    cout << "Введіть чотиризначне число: ";
    cin >> number;
    if (number < 1000 || number > 9999) {
        cout << "Невірне значення! Введіть чотиризначне число." << endl;
    }
    number1 = number / 1000;
    number2 = (number % 1000) / 100;
    number3 = (number % 100) / 10;
    number4 = number % 10;
    new_number = number4 * 1000 + number3 * 100 + number2 * 10 + number1;

    cout << "Нове число: " << new_number << endl;
    system("pause");
    return 0;
}
