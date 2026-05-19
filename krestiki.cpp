#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

char board[3][3];

string player1 = "igrok 1";
string player2 = "igrok 2";

int wins1 = 0;
int wins2 = 0;
int draws = 0;

void color(int text, int background)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), background * 16 + text);
}

void clear()
{
    system("cls");
}

void resetBoard()
{
    char number = '1';

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            board[y][x] = number;
            number++;
        }
    }
}

void printBoard()
{
    clear();

    color(11, 0);

    cout << "\n";
    cout << "      KPECTUKU HOJlUKU\n\n";

    color(15, 0);

    cout << "       " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "      ---|---|---\n";
    cout << "       " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "      ---|---|---\n";
    cout << "       " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n\n";
}

bool checkWin(char symbol)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == symbol &&
            board[i][1] == symbol &&
            board[i][2] == symbol)
            return true;

        if (board[0][i] == symbol &&
            board[1][i] == symbol &&
            board[2][i] == symbol)
            return true;
    }

    if (board[0][0] == symbol &&
        board[1][1] == symbol &&
        board[2][2] == symbol)
        return true;

    if (board[0][2] == symbol &&
        board[1][1] == symbol &&
        board[2][0] == symbol)
        return true;

    return false;
}

bool fullBoard()
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (board[y][x] != 'X' && board[y][x] != 'O')
                return false;
        }
    }

    return true;
}

void move(char symbol, string player)
{
    int choice;

    while (true)
    {
        cout << player << " (" << symbol << ") BbIBERU KJIETKY: ";
        cin >> choice;

        if (choice >= 1 && choice <= 9)
        {
            int y = (choice - 1) / 3;
            int x = (choice - 1) % 3;

            if (board[y][x] != 'X' && board[y][x] != 'O')
            {
                board[y][x] = symbol;
                break;
            }
        }

        color(12, 0);
        cout << "HEBEPHbIU` XOD!\n";
        color(15, 0);
    }
}

void game()
{
    resetBoard();

    while (true)
    {
        printBoard();
        move('X', player1);

        if (checkWin('X'))
        {
            printBoard();

            color(10, 0);
            cout << player1 << " POBEDA!\n";
            color(15, 0);

            wins1++;
            system("pause");
            break;
        }

        if (fullBoard())
        {
            printBoard();

            color(14, 0);
            cout << "HUCHYA!\n";
            color(15, 0);

            draws++;
            system("pause");
            break;
        }

        printBoard();
        move('O', player2);

        if (checkWin('O'))
        {
            printBoard();

            color(10, 0);
            cout << player2 << " POBEDA!\n";
            color(15, 0);

            wins2++;
            system("pause");
            break;
        }

        if (fullBoard())
        {
            printBoard();

            color(14, 0);
            cout << "HUCHYA!\n";
            color(15, 0);

            draws++;
            system("pause");
            break;
        }
    }
}

void statistics()
{
    clear();

    color(11, 0);

    cout << "\n";
    cout << "        CTATUCTUKA\n\n";

    color(15, 0);

    cout << player1 << ": " << wins1 << " POBED\n";
    cout << player2 << ": " << wins2 << " POBED\n";
    cout << "HUCHYU: " << draws << "\n\n";

    system("pause");
}

void settings()
{
    clear();

    color(11, 0);

    cout << "\n";
    cout << "         HACTPOU`KU\n\n";

    color(15, 0);

    cout << "BBEDU UMYA UGROKA 1: ";
    cin >> player1;

    cout << "BBEDU UMYA UGROKA 2: ";
    cin >> player2;

    cout << "\n";
    system("pause");
}

void menu()
{
    int choice;

    while (true)
    {
        clear();

        color(11, 0);

        cout << "\n";
        cout << "      KPECTUKU HOJIUKU\n\n";

        color(15, 0);

        cout << "1. HACHATb UGRY\n";
        cout << "2. CTATUCTUKA\n";
        cout << "3. HACTPOU`KA\n";
        cout << "4. BbIXOD\n\n";

        cout << "BbIBERUTE PUNKT: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            game();
            break;

        case 2:
            statistics();
            break;

        case 3:
            settings();
            break;

        case 4:
            exit(0);

        default:
            color(12, 0);
            cout << "\nOWUBKA!\n";
            color(15, 0);
            system("pause");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");

    menu();

    return 0;
}
