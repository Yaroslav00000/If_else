#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double dist_AB, dist_BC, weight;

    cout << "������ ������� �� �������� � � � (� ��): ";
    cin >> dist_AB;
    if (dist_AB <= 0) {
        cout << "���������� �������! ³������ �� ���� ���� ������ ��� ���������� 0." << endl;
        return 1;
    }

    cout << "������ ������� �� �������� � � � (� ��): ";
    cin >> dist_BC;
    if (dist_BC <= 0) {
        cout << "���������� �������! ³������ �� ���� ���� ������ ��� ���������� 0." << endl;
        return 1;
    }

    cout << "������ ���� ������� (� ��): ";
    cin >> weight;
    if (weight <= 0) {
        cout << "���������� �������! ���� ������� �� ���� ���� ������ ��� ���������� 0." << endl;
        return 1;
    }

    double fuel_per_km;
    if (weight <= 500) {
        fuel_per_km = 1;
    }
    else if (weight <= 1000) {
        fuel_per_km = 4;
    }
    else if (weight <= 1500) {
        fuel_per_km = 7;
    }
    else if (weight <= 2000) {
        fuel_per_km = 9;
    }
    else {
        cout << "���������� �������! ˳��� �� ���� ������ ������ ����� 2000 ��." << endl;
        return 1;
    }

    double total_fuel_needed = fuel_per_km * (dist_AB + dist_BC);
    if (total_fuel_needed <= 300) {
       cout << "̳������� ������� ������ ��� ���������� � ����� �: " << 300 - total_fuel_needed << " ����." << endl;
    }
    else {
       cout << "��������� �������� ���� �� �������� ���������." << endl;
    }
    system("pause");
    return 0;
}
