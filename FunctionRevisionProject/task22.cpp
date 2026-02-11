// Задание 22: Добавьте прототип функции, которая принимает большое 
// вещественное значение и возвращает его квадрат.

#include <iostream>
using namespace std;

long double square(long double number);

int main() {
    cout << square(3.5f);
    return 0;
}

long double square(long double number) {
    return number * number;
}

