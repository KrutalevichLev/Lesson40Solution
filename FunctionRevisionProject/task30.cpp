// Задание 30: Добавьте прототип функции, которая проверяет, 
// является ли символ гласной буквой.

#include <iostream>
using namespace std;

int main() {
    cout << is_vowel('a');
    return 0;
}

... is_vowel(... ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}