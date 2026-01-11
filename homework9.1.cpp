#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x, y, z;
    cout << "Введите три числа: ";
    cin >> x >> y >> z;
    
    int result = sumOfThree(x, y, z);
    cout << "Сумма: " << result << endl;
    
    return 0;
}