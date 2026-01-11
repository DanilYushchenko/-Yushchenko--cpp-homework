#include <iostream>
using namespace std;

int main() {
    double r;
    const double pi = 3.14;
    
    cout << "Введите радиус: ";
    cin >> r;
    
    double s = pi * r * r;
    cout << "Площадь круга: " << s << endl;
    
    return 0;
}