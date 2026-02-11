// Задание 29: Вызовите функцию `reverse_string`, которая переворачивает строку.

#include <iostream>
using namespace std;

string reverse_string(string str) {
    string result;
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }
    return result;
}

int main() {
    cout << reverse_string("Lol kek eshkere.");
    return 0;
}