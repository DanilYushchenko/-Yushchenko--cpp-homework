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

    // Сеттеры
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setScore(double s) {
        score = s;
    }

    // Геттеры
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getScore() {
        return score;
    }

    // Дополнение: проверка на совершеннолетие
    bool isAdult() const {
        return age >= 18;
    }

    // Дополненный show() — теперь выводит всё + статус
    void show() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << score << endl;
        
        if (isAdult()) {
            cout << "Совершеннолетний: да" << endl;
        } else {
            cout << "Совершеннолетний: нет" << endl;
        }
    }
};

int main() {

    Student s("Иван", 16, 4.2);
    s.show();
    
    return 0;
}