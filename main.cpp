#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;

    cout << "������ ����������� �����: ";
    cin >> number;
    if (number < 100000 || number > 999999) {
        cout << "�������! ������ ����������� �����." << endl;
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
        cout << number << " - ������� �����!" << endl;
    }
    else {
        cout << number << " - �� ������� �����." << endl;
    }
    system("pause");
    return 0;
}
