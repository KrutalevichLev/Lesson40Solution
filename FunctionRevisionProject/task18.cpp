// Задание 18: Вызовите функцию `print_status`.

#include <iostream>
using namespace std;

void print_status(int code, bool success)
{
    cout << "Code: " << code << ", Success: " << (success ? "Yes" : "No");
}

int main()
{
    print_status(6969, true);
    return 0;
}

