#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // Параметры окружности
    const double cx = 2.0;
    const double cy = -1.0;
    const double r = 5.0;
    const double r_squared = r * r; // r²

    // Вычисляем квадрат расстояния от точки до центра
    double distance_squared = (x - cx) * (x - cx) + (y - cy) * (y - cy);

    // Сравниваем с r²
    if (distance_squared < r_squared) {
        cout << "Точка внутри окружности" << endl;
    } else if (distance_squared == r_squared) {
        cout << "Точка на границе окружности" << endl;
    } else {
        cout << "Точка вне окружности" << endl;
    }

    return 0;
}