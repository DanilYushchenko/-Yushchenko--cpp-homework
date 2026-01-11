#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    
    srand(time(0));
    
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 10 + 1; 
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    
    cout << "Сумма элементов: " << sum << endl;
    
    return 0;
}