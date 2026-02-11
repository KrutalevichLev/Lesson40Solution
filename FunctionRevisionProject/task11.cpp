// Задание 11: Добавьте прототип функции, которая принимает действительное
// и логическое числа и возвращает абсолютное значение, если логическое 
// значение обозначает истину.

#include <iostream>
using namespace std;

int main()
{
    cout << abs_value(-5.5, true);
    return 0;
}

bool abs_value(double num, bool take_abs)
{
    return take_abs ? (num < 0 ? -num : num) : num;
}