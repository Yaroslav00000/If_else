#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;

    cout << "Введіть шестизначне число: ";
    cin >> number;
    if (number < 100000 || number > 999999) {
        cout << "Помилка! Введіть шестизначне число." << endl;
        return 1;
    }
    int firstPart = number / 1000;
    int secondPart = number % 1000;
    int sumOfFirstPart = 0;
    int sumOfSecondPart = 0;
    while (firstPart > 0) {
        sumOfFirstPart += firstPart % 10;
        firstPart /= 10;
    }
    while (secondPart > 0) {
        sumOfSecondPart += secondPart % 10;
        secondPart /= 10;
    }
    if (sumOfFirstPart == sumOfSecondPart) {
        cout << number << " - щасливе число!" << endl;
    }
    else {
        cout << number << " - не щасливе число." << endl;
    }
    system("pause");
    return 0;
}
