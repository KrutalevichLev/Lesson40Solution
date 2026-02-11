// Задание 30: Добавьте прототип функции, которая проверяет, 
// является ли символ гласной буквой.

#include <iostream>
using namespace std;

bool is_vowel(char ch);

int main() {
    cout << is_vowel('a');
    return 0;
}

bool is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}