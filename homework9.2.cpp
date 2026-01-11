#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    const int size = 5;
    int arr[size];
    
    srand(time(0));
    
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1; 
        cout << arr[i] << " ";
    }
    cout << endl;
    
    doubleArray(arr, size);
    
    cout << "После удвоения: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}