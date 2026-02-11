// Задание 19: Добавьте прототип и вызов функции, которая принимает два целых значения
// и ыозырвщвет таблицу Пифагора 10 на 10.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    return 0;
}

... print_table(...)
{
    string table = "";
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            table += to_string(i * j) + "\t";
        }
        table += "\n";
    }

    return table;
}

