#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
using namespace std;

// Функція для генерації масиву
void create(int t[], int size) {
    for (int i = 0; i < size; i++) {
        t[i] = rand() % 22 - 14; // Генеруємо випадкове число в діапазоні [-14, 7]
    }
}

void calculateCountAndTotalSum(int t[], int size, int& count, int& totalSum) {
    count = 0;
    totalSum = 0;

    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            count++;
            totalSum += t[i];
        }
    }
}

// Функція для виведення масиву на екран
void print(const int t[], int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}
void replaceWithZeros(int t[], int size) {
    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            t[i] = 0;
        }
    }
}
int main() {
    setlocale(LC_CTYPE, "ukr");
    srand(time(0));
    const int size = 20;
    int t[size];

    create(t, size);
    
    int count, totalSum;
    calculateCountAndTotalSum(t, size, count, totalSum);

    cout << "Згенерований масив: ";
    print(t, size);
    cout << "Кiлькiсть елементiв, якi задовольняють критерiю: " << count << endl;
    cout << "Сума елементiв, якi задовольняють критерiю: " << totalSum << endl;
    replaceWithZeros(t, size);

    cout << "Модифiкований масив пiсля замiни: ";
    print(t, size);

    return 0;
}
