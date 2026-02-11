// Задание 13: Добавьте прототип функции, которая принимает строку 
// и целое число и возвращает подстроку.

#include <iostream>
using namespace std;

int main()
{
    cout << substring("Programming", 3, 5);
    return 0;
}

string substring(string str, int start, int length)
{
    string result;
    for (int i = start; i < start + length && i < str.length(); i++)
    {
        result += str[i];
    }

    return result;
}

