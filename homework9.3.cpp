#include <iostream>
using namespace std;

// Рекурсивная функция: сумма чисел от 1 до n
int sumToN(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumToN(n - 1);
    }
}

int main() {
    int n;
    cout << "Введите N: ";
    cin >> n;
    
    int result = sumToN(n);
    cout << "Сумма: " << result << endl;
    
    return 0;
}