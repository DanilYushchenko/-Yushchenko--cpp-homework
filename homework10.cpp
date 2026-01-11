#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    // Вводим размер массива
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    
    // Создаём вектор для хранения чисел
    vector<int> nums(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Вводим target
    int target;
    cout << "Введите target: ";
    cin >> target;
    
    // Хэш-таблица: значение -> индекс
    unordered_map<int, int> seen;
    
    // Проходим по массиву один раз
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i]; // что нужно найти, чтобы в сумме дать target
        
        // Если такое число уже встречалось — нашли пару!
        if (seen.find(complement) != seen.end()) {
            cout << "Выходные данные: " << seen[complement] << " " << i << endl;
            return 0; // выходим, т.к. гарантируется ровно одно решение
        }
        
        // Запоминаем текущее число и его индекс
        seen[nums[i]] = i;
    }
    
    // На случай ошибки (хотя по условию решения всегда есть)
    cout << "Решение не найдено." << endl;
    return 0;
}