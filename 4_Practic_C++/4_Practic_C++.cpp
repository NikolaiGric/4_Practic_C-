#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string removeVowels(string word) {
    string result = "";
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}


string removeConsonants(string word) {
    string result = "";
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            result += c;
        }
    }
    return result;
}

int main() {
    string word;
    int choice;

    cout << "Введите слово: ";
    cin >> word;

    cout << "Выберите действие:" << endl;
    cout << "1. Слово выводится задом наперед." << endl;
    cout << "2. Вывести слово без гласных." << endl;
    cout << "3. Вывести слово без согласных." << endl;
    cout << "4. Рандомно раскидывать буквы заданного слова." << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        reverse(word.begin(), word.end());
        cout << "Результат: " << word << endl;
        break;
    case 2:
        cout << "Результат: " << removeVowels(word) << endl;
        break;
    case 3:
        cout << "Результат: " << removeConsonants(word) << endl;
        break;
    case 4:
        random_shuffle(word.begin(), word.end());
        cout << "Результат: " << word << endl;
        break;
    default:
        cout << "Неверный выбор!" << endl;
        break;
    }

    return 0;
}
