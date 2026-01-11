#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ввод: x = ";
    cin >> x;
    
    int original = x;
    int reversed = 0;
    
    while (x != 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    
    if (original == reversed) {
        cout << "Вывод: true" << endl;
    } else {
        cout << "Вывод: false" << endl;
    }
    
    return 0;
}