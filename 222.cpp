#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int NumT;
    int NumN;
    int swt;

    const int max{ 10 };
    cout << "1 - INT" << endl;
    cout << "2 - SHORT" << endl;
    cout << "3 - LONG" << endl;
    cout << "4 - FLOAT" << endl;
    cout << "5 - DOUBLE" << endl;
    cout << "6 - CHAR" << endl;
    cout << "7 - BOOL" << endl;
    cout << "8 - STRING" << endl;
    cout << "Ваш Выбор: " << endl;
    cin >> swt;
    switch (swt) {
    case 1: {
        int numbers[max];
        int i{};
        cout << "Введите INT числа: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 2: {
        short numbers[max];
        int i{};
        cout << "Введите SHORT числа: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 3:
    {
        long numbers[max];
        int i{};
        cout << "Введите LONG числа: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 4:
    {
        float numbers[max];
        int i{};
        cout << "Введите FLOAT: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 5:
    {
        double numbers[max];
        int i{};
        cout << "Введите DOUBLE: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 6:
    {
        char numbers[max];
        setlocale(0, "");
        int i{};
        cout << "Введите CHAR: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 7:
    {
        bool numbers[max];
        int i{};
        cout << "Введите TRUE/FALSE: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    case 8:
    {
        string numbers[max];
        setlocale(0, "");
        int i{};
        cout << "Введите STRING: " << endl;
        while (i < max)
        {
            cin >> numbers[i];
            i++;
        }
        for (i = 0; i < max; ++i)
        {
            cout << numbers[i] << "\t";
        }
        cout << endl;
        break;
    }

    default:
    {
        cout << "the end of the line!" << endl;
        break;
    }


    }

    int _;
    cin >> _;
    return 0;



}
