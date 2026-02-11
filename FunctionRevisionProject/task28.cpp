// Задание 28: Объявите функцию `average`, которая принимает три числа 
// с плавающей запятой и возвращает среднее арифметическое их значение.
#include <iostream>
using namespace std;

int main() {
    double a = 1.5f, b = 2.5f, c = 3.5f;
    cout << average(a, b, c);
    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}