#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    
    cout << "Введите N: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << "Сумма: " << sum << endl;
    
    return 0;
}