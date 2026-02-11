// Задание 23: Вызовите функцию `to_upper`, которая преобразует символ 
// в верхний регистр.

#include <iostream>
using namespace std;

char to_upper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }

    return ch;
}

int main() {
    cout << to_upper('a');
    return 0;
}