// Задание 23: Вызовите функцию `to_upper`, которая преобразует символ 
// в верхний регистр.

#include <iostream>
using namespace std;

... to_upper(... ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }

    return ch;
}

int main() {
    return 0;
}