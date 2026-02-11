// Задание 3: Вызовите функцию `print_сhar_and_string` в `main`.

#include <iostream>
using namespace std;

void print_сhar_and_string(char symbol, string text)
{
    cout << symbol << ": " << text;
}

int main()
{
    print_сhar_and_string('s', "string text");
    return 0;
}