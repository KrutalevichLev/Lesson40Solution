// Задание 4: Добавьте прототип функции, которая принимает булевское 
// и целочисленное значения и возвращает истину, если число чётное.

#include <iostream>
using namespace std;

int main()
{
    cout << is_even(true, 4);
    return 0;
}

bool is_even(bool flag, int num)
{
    return flag && (num % 2 == 0);
}
