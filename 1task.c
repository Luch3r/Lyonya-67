#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Введите два числа: ";
    cin >> a >> b;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Результат: " << a + b;
            break;

        case '-':
            cout << "Результат: " << a - b;
            break;

        case '*':
            cout << "Результат: " << a * b;
            break;

        case '/':
            if (b == 0)
                cout << "Ошибка: деление на ноль!";
            else
                cout << "Результат: " << a / b;
            break;

        default:
            cout << "Неизвестная операция";
    }

    return 0;
}
