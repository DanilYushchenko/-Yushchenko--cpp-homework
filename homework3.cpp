#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    cout << "Введите длину:";
    cin >> a;
    cout << "Введите ширину:";
    cin >> b;
 
    cout << "Периметр: " << 2 * (a + b) << endl;
    cout << "Площадь: " << a * b << endl;
 
    return 0;
}