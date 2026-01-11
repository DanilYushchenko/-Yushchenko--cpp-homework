#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:
    // Конструктор по умолчанию
    Student() {
        name = "Неизвестный";
        age = 0;
        score = 0.0;
    }

    // Конструктор с параметрами
    Student(string n, int a, double s) {
        name = n;
        age = a;
        score = s;
    }

    // Сеттеры (установка значений)
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setScore(double s) {
        score = s;
    }

    // Геттеры (получение значений)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getScore() {
        return score;
    }

    // Метод show() — вывод информации
    void show() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Балл: " << score << endl;
    }
};

int main() {
    // Создаём студента с параметрами
    Student s("Иван", 19, 4.2);
    
    // Выводим информацию
    s.show();
    
    return 0;
}