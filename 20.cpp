#include <iostream>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void drawLine(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        cout << symbol;
    }
    cout << endl;
}

void drawSquare(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

void drawRectangle(int width, int height, char symbol) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

void drawTriangle(int size, char symbol) {
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

void drawGrid(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i % 2 == 0) {
                cout << symbol << " ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

int main() {
    setlocale(0, "");
    int choice;
    int size, width, height;
    char symbol;
    int m = 0;
    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl;
    cout << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << "[ 3 ] Прямоугольник" << endl;
    cout << "[ 4 ] Треугольник" << endl;
    cout << "[ 5 ] Решетка" << endl;
    cout << "[ 6 ] Крестик" << endl;
    cout << "[ 7 ] Плюс" << endl;
    cout << "[ 8 ] Ромб" << endl;
    cout << "[ 9 ] Змейка" << endl;
    cout << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;

    clearScreen();

    switch (choice) {
    case 1:
        cout << "[ + ] Фигура: \"Линия\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawLine(size, symbol);
        break;

    case 2:
        cout << "[ + ] Фигура: \"Квадрат\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawSquare(size, symbol);
        break;

    case 3:
        cout << "[ + ] Фигура: \"Прямоугольник\"" << endl;
        cout << endl;
        cout << "[ + ] Ширина: ";
        cin >> width;
        cout << "[ + ] Высота: ";
        cin >> height;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawRectangle(width, height, symbol);
        break;

    case 4:
        cout << "[ + ] Фигура: \"Треугольник\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawTriangle(size, symbol);
        break;

    case 5:
        cout << "[ + ] Фигура: \"Решетка\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawGrid(size, symbol);
        break;
    case 6:
        cout << "[ + ] Фигура: \"Крестик\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        if (size % 2 == 0) {
            cout << "Ошибка";
            break;
        }
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1) {
                    cout << symbol;
                }
                else {
                    cout << " ";
                }

            }
            cout << endl;
        }
        break;
    case 7:
        cout << "[ + ] Фигура: \"Плюс\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        if (size % 2 == 0) {
            cout << "Ошибка";
            break;
        }
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == size / 2 or j == size / 2) {
                    cout << symbol;
                }
                else {
                    cout << " ";

                }

            }
            cout << endl;
        }
        break;
    case 8:
        cout << "[ + ] Фигура: \"Ромб\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        if (size % 2 == 0) {
            cout << "Ошибка";
            break;
        }
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int dj, di;
                if (i >= size / 2) di = i - size / 2;
                else di = (size / 2) - i;
                if (j >= size / 2) dj = j - size / 2;
                else dj = (size / 2) - j;
                if (dj + di == size / 2) {
                    cout << symbol;
                }
                else {
                    cout << " ";
                }

            }
            cout << endl;
        }

        break;
    case 9:
        cout << "[ + ] Фигура: \"Змейка\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> symbol;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 2 != 0) {
                    cout << symbol;
                }
                else if(j == 0 and m == 3){
                    cout << symbol;
                }
                else if (j == size-1 and m == 1) {
                    cout << symbol;
                }
                else {
                    cout << " ";
                }

                if (m == 4) m = 0;
            }
            m += 1;
            cout << endl;
        }

        break;

    default:
        cout << "Неверный выбор!" << endl;
        break;
    }

    return 0;
}
