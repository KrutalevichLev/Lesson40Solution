// Задание 26: Объявите прототип и вызовите функцию `fibonacci` 
// для вычисления 10-го числа Фибоначчи.

#include <iostream>
using namespace std;

int main() {
    return 0;
}

... fibonacci(...) {
    if (n <= 1) {
        return n;
    }

    long long a = 0;
    long long b = 1;
    
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }

    return b;
}

