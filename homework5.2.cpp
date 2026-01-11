#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Введите год: ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Год високосный." << endl;
    } else {
        cout << "Год не високосный." << endl;
    }
    
    return 0;
}