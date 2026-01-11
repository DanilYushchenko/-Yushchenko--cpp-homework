#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cout << "Введите количество строк: ";
    cin >> n;

    string words[100];   // исходные строки
    bool result[100];    // логические значения
    
    // Ввод и приведение к нижнему регистру
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        string lower = "";
        for (char c : temp) {
            lower += tolower(c);   // приводим каждый символ к нижнему регистру
        }
        words[i] = lower;   // сохраняем в массив
    }
    // Логика flick
    bool current = true;
    for (int i = 0; i < n; i++) {
        if (words[i] == "flick") {
            current = !current;   // СНАЧАЛА переключаем
        }
        result[i] = current;      // ПОТОМ записываем
    }

    // Вывод строк
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << "\"" << words[i] << "\"";
    }
    cout << "]" << endl;

    // Вывод булевых
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << (result[i] ? "true" : "false");
    }
    cout << "]" << endl;

    return 0;
}