#include <iostream>
#include <cstdlib>  // для rand() и srand()
#include <ctime>    
using namespace std;

// Функция, которая умножает каждый элемент массива на 2
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    const int size = 5;
    int arr[size];
    
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    // Заполняем массив случайными числами от 1 до 10
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1; // числа от 1 до 10
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Удваиваем элементы
    doubleArray(arr, size);
    
    // Выводим результат
    cout << "После удвоения: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}