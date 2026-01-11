#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValid(string s) {
    vector<char> stack; // будем использовать как стек

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            // Если открывающая скобка — кладём в стек
            stack.push_back(c);
        } else {
            // Если закрывающая — проверяем, есть ли что закрывать
            if (stack.empty()) {
                return false; // нет открывающей — ошибка
            }

            char top = stack.back(); // верхний элемент стека
            stack.pop_back();        // убираем его

            // Проверяем, соответствует ли закрывающая скобка открывающей
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    // Если стек пуст — все скобки закрыты правильно
    return stack.empty();
}

int main() {
    string s;
    cout << "Введите строку: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Выходные данные: true" << endl;
    } else {
        cout << "Выходные данные: false" << endl;
    }

    return 0;
}