// Задание 15: Вызовите функцию `print_number_and_text`.

#include <iostream>
using namespace std;

void print_number_and_text(char number, string text)
{
    cout << number << ": " << text << endl;
}

int main()
{
    print_number_and_text('4', "string text");
    return 0;
}