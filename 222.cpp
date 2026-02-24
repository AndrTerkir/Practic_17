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
    cout << "1 INT,2 SHORT,3 LONG,4 FLOAT,5 DOUBLE,6 CHAR,7 BOOL,8 STRING" << endl;
    cout<< "Ваш Выбор: " << endl;
    cin >> swt;
    switch (swt) {
    case 1: {
        int numbers[max];
        int i{};
        cout << "Введи инт" << endl;
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
        cout << "Введи короткий" << endl;
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
        cout << "Введи длинный" << endl;
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
        cout << "Введи флот" << endl;
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
        cout << "Введи двойной" << endl;
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
        cout << "Введи знак" << endl;
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
        cout << "Введи труе фалсе" << endl;
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
        cout << "Введи Строки" << endl;
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



}
