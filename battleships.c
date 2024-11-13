#include <stdio.h>
#include <windows.h>

void Initialize()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    system("cls");
    return;
}

// Local variables
char board[12][12];

void InitBoard()
{
    // First field empty (corner)
    board[0][0] = ' ';

    // Colums 1-10
    for (int j = 1; j <= 10; j++) {
        board[0][j] = ' '; // Initialisiere für Lesbarkeit, aber wir drucken später explizit die Zahlen
    }

    // Rows A-J
    for (int i = 1; i <= 10; i++) {
        board[i][0] = 'A' + (i - 1); // ASCII-Wert für A beginnt bei 65
    }

    // Fill with water
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            board[i][j] = '~';
        }
    }
}

void DrawBoard()
{
// Draw complete board
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            if (i == 0 && j > 0) {
                printf("%d  ", j);
            } else {
                printf("%c  ", board[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    Initialize();
    InitBoard();
    DrawBoard();
    printf("\n\n");
    return 0;
}
