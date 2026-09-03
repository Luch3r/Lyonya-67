#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Введите номер месяца: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Некорректный номер месяца.";
        return 0;
    }

    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "Зима";
            break;

        case 3:
        case 4:
        case 5:
            cout << "Весна";
            break;

        case 6:
        case 7:
        case 8:
            cout << "Лето";
            break;

        case 9:
        case 10:
        case 11:
            cout << "Осень";
            break;
    }

    return 0;
}
