#include <iostream>
#include <algorithm> // для sort()
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int arr[100]; // максимум 100 элементов

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Введите число x: ";
    cin >> x;

    // Сортируем массив по возрастанию
    sort(arr, arr + n);

    // Бинарный поиск
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            result = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "Индекс искомого элемента: " << result << endl;

    return 0;
}