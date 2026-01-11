#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите римское число: ";
    cin >> s;

    int total = 0;
    int i = 0;

    while (i < s.length()) {
        // Проверяем возможные двухсимвольные комбинации (вычитание)
        if (s[i] == 'I' && i + 1 < s.length()) {
            if (s[i + 1] == 'V') { total += 4; i += 2; continue; }
            if (s[i + 1] == 'X') { total += 9; i += 2; continue; }
        }
        if (s[i] == 'X' && i + 1 < s.length()) {
            if (s[i + 1] == 'L') { total += 40; i += 2; continue; }
            if (s[i + 1] == 'C') { total += 90; i += 2; continue; }
        }
        if (s[i] == 'C' && i + 1 < s.length()) {
            if (s[i + 1] == 'D') { total += 400; i += 2; continue; }
            if (s[i + 1] == 'M') { total += 900; i += 2; continue; }
        }

        // Обычные односимвольные значения
        if (s[i] == 'I') total += 1;
        else if (s[i] == 'V') total += 5;
        else if (s[i] == 'X') total += 10;
        else if (s[i] == 'L') total += 50;
        else if (s[i] == 'C') total += 100;
        else if (s[i] == 'D') total += 500;
        else if (s[i] == 'M') total += 1000;

        i++;
    }

    cout << "Целое число: " << total << endl;
    return 0;
}