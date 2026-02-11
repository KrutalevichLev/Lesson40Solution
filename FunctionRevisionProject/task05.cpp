// Задание 5: Объявите функцию `divide`, которая принимает вещественные значения
// и возвращает их частное.

#include <iostream>
using namespace std;

double divide(double a, double b) {
    return a / b;
}

int main()
{
    cout << divide(10.5, 2.0f);
    return 0;
}