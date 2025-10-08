#include <iostream>
using namespace std;

int main() {
    double num;
    
    cout << "Введите число: ";
    cin >> num;
    
    cout << "Как double: " << num << endl;
    
    int intNum = static_cast<int>(num);
    cout << "Как int: " << intNum << endl;
    
    bool boolNum = static_cast<bool>(num);
    cout << "Число не равно 0? " << boolalpha << boolNum << endl;
    
    return 0;

}
