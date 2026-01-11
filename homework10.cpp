#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    

    int target;
    cout << "Введите target: ";
    cin >> target;
    
    unordered_map<int, int> seen;
    
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i]; 
        
        if (seen.find(complement) != seen.end()) {
            cout << "Выходные данные: " << seen[complement] << " " << i << endl;
            return 0; 
        }
        
        seen[nums[i]] = i;
    }
    
    cout << "Решение не найдено." << endl;
    return 0;
}