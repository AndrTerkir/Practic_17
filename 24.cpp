#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    setlocale(0, "");
    const int max{ 7 };
    int s = 0;
    int v = 0;
    int o[max];
    int z = 1;
    int g = 0;

    while (s != 7) {
        cout << endl << "[ + ] Инициализация | ячейка  " << s << ": ";
        cin >> o[s];
        s++;
    }
    int n = sizeof(o) / sizeof(o[0]);

    cout << "[+] Настройки массива:" << endl;
    cout << "[1] Сортировка по возрастанию" << endl;
    cout << "[2] Сортировка по убыванию" << endl;
    cout << "[3] Перемножить массив" << endl;
    cout << "[4] Сложить массив" << endl;
    cout << "[5] Разделить массив" << endl;
    cout << "[6] Обнулить массив" << endl;
    cout << "[9] Задать новые значения массиву" << endl;
    cout << "[+] Ввод:";


    cin >> v;
    switch (v)
    {
    case 1:
        sort(o, o + n);
        for (int x : o) {
            cout << x << " ";
        }
        cout << endl;
        break;

    case 2:

        sort(o, o + n, greater<int>());

        for (int x : o) {
            cout << x << " ";
        }
        cout << endl;
        break;

    case 3:
        for (int i = 0; i < max; ++i)
        {
            z = (z * o[i]);
            
            
        }
        cout << z;
        break;
    case 4:
        for (int i = 0; i < max; ++i)
        {
            g = (g + o[i]);
        }
        cout << g;
        break;
    case 5:
        int r;
        cout << "Vvjedi Deljitjel"<<endl;
        cin >> r;
        for (int i = 0; i < max; ++i)
        {
            o[i] = (o[i] / r);
        }
        for (int i = 0; i < max; ++i)
        {
            cout << o[i] << "\t";
        }
        break;
    case 6:
        for (int i = 0; i < max; ++i) {
            o[i] = 0;
        }
        break;
    case 9: {
        s = 0;
        while (s != 7) {
            cout << endl << "[ + ] Инициализация | ячейка  " << s << ": ";
            cin >> o[s];
            s++;
        }
    }
          break;
    default:
        cout << "not vjerno" << endl;
        break;

    }
    return 0;

}
