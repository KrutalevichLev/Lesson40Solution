// Задание 8: Вызовите функцию `check_positive` с аргументами `3.14f` и `true`.
#include <iostream>
using namespace std;

bool check_positive(double num, bool strict)
{
    return strict ? num > 0 : num >= 0;
}

int main()
{
    check_positive(3.14f, true);
    return 0;
}

