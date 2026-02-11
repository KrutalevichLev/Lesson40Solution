// Задание 27: Добавьте прототип функции, которая проверяет, 
// является ли целое число простым.

#include <iostream>
using namespace std;

bool is_prime(int num);

int main() {
    cout << is_prime(7);
    return 0;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}