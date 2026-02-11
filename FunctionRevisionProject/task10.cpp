// Задание 10: Объявите функцию `print_message`, которая принимает строку 
// и ничего не возвращает.

#include <iostream>
using namespace std;

int main()
{
    print_message("Hello, C++!");
    return 0;
}

void print_message(string msg) {

    cout << msg;
}