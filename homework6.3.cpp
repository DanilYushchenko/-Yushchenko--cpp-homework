#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    cout << "Введите строку: ";
    getline(cin, s); // читает всю строку, включая пробелы
    
    cout << "Длина строки: " << s.length() << endl;
    
    return 0;
}