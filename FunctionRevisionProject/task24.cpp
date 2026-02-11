// Задание 24: Добавьте прототип функции, которая принимает два целых числа 
// и возвращает их разность.

#include <iostream>
using namespace std;

int sub(int a, int b);

int main() {
    cout << sub(12, 3);
    return 0;
}

int sub(int a,int b) {
    return a - b;
}