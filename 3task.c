#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Введите три стороны: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Треугольник не существует.";
    }
    else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Треугольник равносторонний.";
        }
        else if (a == b || a == c || b == c) {
            cout << "Треугольник равнобедренный.";
        }
        else {
            cout << "Треугольник разносторонний.";
        }
    }
    else {
        cout << "Треугольник не существует.";
    }

    return 0;
}
