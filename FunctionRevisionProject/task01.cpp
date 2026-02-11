// Задание 1: Добавьте прототип функции, которая принимает целочисленное 
// и вещественное значения и возвращает их произведение.

#include <iostream>
using namespace std;

double multiply(int a, double b);

int main()
{
    cout << multiply(5, 3.5f);
    return 0;
}

double multiply(int a, double b) {
    return a * b;
}