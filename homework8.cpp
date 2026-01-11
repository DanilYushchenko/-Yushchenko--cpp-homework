#include <iostream>
#include <string>
#include <cctype> // для tolower
using namespace std;

int main() {
    string word;
    cout << "Ввод: word = ";
    getline(cin, word); // читаем всю строку, включая пробелы

    bool isIsogram = true;

    // Проверяем каждый символ
    for (int i = 0; i < word.length(); i++) {
        char current = tolower(word[i]); // приводим к нижнему регистру
        
        // Пропускаем пробелы
        if (current == ' ') {
            continue;
        }

        // Проверяем, встречается ли этот символ ещё раз
        for (int j = i + 1; j < word.length(); j++) {
            if (tolower(word[j]) == current) {
                isIsogram = false;
                break;
            }
        }
        
        if (!isIsogram) {
            break;
        }
    }

    if (isIsogram) {
        cout << "Вывод: true" << endl;
    } else {
        cout << "Вывод: false" << endl;
    }

    return 0;
}