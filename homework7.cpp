#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ввод: x = ";
    cin >> x;
    
    // Сохраняем исходное число
    int original = x;
    int reversed = 0;
    
    // Разворачиваем число
    while (x != 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    
    // Сравниваем
    if (original == reversed) {
        cout << "Вывод: true" << endl;
    } else {
        cout << "Вывод: false" << endl;
    }
    
    return 0;
}