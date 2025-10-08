#include <iostream>
using namespace std;

int main() {
    double num;
    
    cout << "Введите число: ";
    cin >> num;
    
    cout << "Как double: " << num << endl;
    
    int intNumber = static_cast<int>(num);
    cout << "Как int: " << intNumber << endl;
    
    bool boolNumber = static_cast<bool>(num);
    cout << "Число не равно 0? " << boolalpha << boolNumber << endl;
    
    return 0;
}