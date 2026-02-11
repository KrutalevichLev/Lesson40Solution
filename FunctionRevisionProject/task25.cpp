// Задание 25: Объявите функцию `factorial`, которая "вычисляет" 
// факториал целого числа.

#include <iostream>
using namespace std;

long long factorial(int n);

int main() {
    cout << factorial(5);
    return 0;
}

long long factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}