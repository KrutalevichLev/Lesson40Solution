// Задание 9: Добавьте прототип функции, которая принимает символ 
// и целое число и возвращает строку из повторяющихся символов.

#include <iostream>
using namespace std;

string repeat_symbol(char ch, int count);

int main()
{
    cout << repeat_symbol('*', 5);
    return 0;
}

string repeat_symbol(char ch, int count)
{
    string result;
    for (int i = 0; i < count; i++)
    {
        result += ch;
    }
    return result;
}