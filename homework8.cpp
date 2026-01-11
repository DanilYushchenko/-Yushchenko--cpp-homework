#include <iostream>
#include <string>
#include <cctype> // для tolower
using namespace std;

int main() {
    string word;
    cout << "Ввод: word = ";
    getline(cin, word); 

    bool isIsogram = true;

    for (int i = 0; i < word.length(); i++) {
        char current = tolower(word[i]); 
        
        if (current == ' ') {
            continue;
        }

        for (int j = i + 1; j < word.length(); j++) {
            if (tolower(word[j]) == current) {
                isIsogram = false;
                break;
            }
        }
        
        if (!isIsogram) {
            break;
        }
    }

    if (isIsogram) {
        cout << "Вывод: true" << endl;
    } else {
        cout << "Вывод: false" << endl;
    }

    return 0;
}