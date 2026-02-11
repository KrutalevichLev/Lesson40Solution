// Задание 19: Добавьте прототип и вызов функции, которая принимает два целых значения
// и возвращает таблицу Пифагора 10 на 10.

#include <iostream>
#include <string>
using namespace std;

string print_table(int n, int m);

int main()
{
    cout << print_table(10, 10);
    return 0;
}

string print_table(int n, int m)
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

