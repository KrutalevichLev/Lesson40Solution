// Задание 17: Объявите и вызовите функцию `print`, которая принимает строку
// выводит её на консоль.

#include <iostream>
using namespace std;

void print(string msg);

int main()
{
    print("using namespace std;");
    return 0;
}

void print(string msg) {

    cout << msg;
}

