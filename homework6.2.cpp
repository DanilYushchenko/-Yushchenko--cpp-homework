#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

int main() {
    int matrix[2][2];
    
    srand(time(0));
    
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix[i][j] = rand() % 10 + 1; 
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Главная диагональ:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    
    return 0;
}