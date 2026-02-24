#include <iostream>
using namespace std;

int main() {

    const int size = 5;
    setlocale(0, "");
    int numbers[size];

    cout << "Введите " << size << " целых чисел:\n" << endl;

    for (int i = 0; i < size; ++i) {

      cin >> numbers[i];

    }

    for (int i = 0; i < size; i++) {
        cout << "| Таблица № "<< i+1<<  endl;
        cout << "|_________________________________________| " << endl;
        cout << "|  Число   |      Пример      | Результат |" << endl;
        cout << "|_________________________________________| " << endl;
        cout << "|   " << numbers[i] << "      |        " << numbers[i] << "+" << numbers[i] << "       |          " << numbers[i] + numbers[i] << "|" << endl;
        cout << "|_________________________________________| " << endl;
        cout << "|   " << numbers[i] << "      |        " << numbers[i] << "-" << numbers[i] << "       |          " << numbers[i] - numbers[i] << "|" << endl;
        cout << "|_________________________________________| " << endl;
        cout << "|   " << numbers[i] << "      |        " << numbers[i] << "/" << numbers[i] << "       |          " << numbers[i] / numbers[i] << "|" << endl;
        cout << "|_________________________________________| " << endl;
        cout << "|   " << numbers[i] << "      |       " << numbers[i] << "*" << numbers[i] << "       |          " << numbers[i] * numbers[i] << "|" << endl;
        cout << "|_________________________________________| " << endl;

    }
}
