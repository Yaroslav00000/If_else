#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double dist_AB, dist_BC, weight;

    cout << "Введіть відстань між пунктами А і В (в км): ";
    cin >> dist_AB;
    if (dist_AB <= 0) {
        cout << "Неможливий маршрут! Відстань не може бути меншою або дорівнювати 0." << endl;
        return 1;
    }

    cout << "Введіть відстань між пунктами В і С (в км): ";
    cin >> dist_BC;
    if (dist_BC <= 0) {
        cout << "Неможливий маршрут! Відстань не може бути меншою або дорівнювати 0." << endl;
        return 1;
    }

    cout << "Введіть вагу вантажу (в кг): ";
    cin >> weight;
    if (weight <= 0) {
        cout << "Неможливий маршрут! Вага вантажу не може бути меншою або дорівнювати 0." << endl;
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
        cout << "Неможливий маршрут! Літак не може підняти вантаж більше 2000 кг." << endl;
        return 1;
    }

    double total_fuel_needed = fuel_per_km * (dist_AB + dist_BC);
    if (total_fuel_needed <= 300) {
       cout << "Мінімальна кількість палива для дозаправки в пункті В: " << 300 - total_fuel_needed << " літрів." << endl;
    }
    else {
       cout << "Неможливо здійснити політ за введеним маршрутом." << endl;
    }
    system("pause");
    return 0;
}
