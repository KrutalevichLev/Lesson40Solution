// Задание 7: Добавьте прототип функции, которая принимает большой 
// и маленький целочисленные значения и возвращает их разность.

#include <iostream>
using namespace std;

long long subtract(long long a, short b);

int main()
{
    cout << subtract(10000000000LL, 100);
    return 0;
}

long long subtract(long long a, short b)
{
    return a - b;
}
