#include <iostream>
using namespace std;

// Функция, возвращающая сумму трёх чисел
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