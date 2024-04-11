/*
Create an array to represent the board:
    - Can be of the type char and consist of 10 elements
    - Each element represents a coordinate on the board that the user can select
    
Some functions that you should probably create:
    - checkForWin - Checks to see if a player has won or the game is a draw
    - drawboard - draws the board after each turn
    - markBoard - sets the char array with a selection and check for invalid selection
*/

#include <stdio.h>

int checkForWin(char arrBoard[10]);
void drawboard(char arrBoard[10]);
char markBoard(char arrBoard[10], int player, int choice);
int checkChoice(char arrBoard[10], int choice);

int main(void) {
    int on = 1, player = 1, choice = 0;
    char arrBoard[10] = {'0', 
                    '1', '2', '3', 
                    '4', '5', '6', 
                    '7', '8', '9'
                    };
    
    while (on == 1) {
        if (player == 1)
            printf("Player 1 (X)\nEnter Square Number: ");
        else if (player == 2)
            printf("Player 2 (O)\nEnter Square Number: ");

        scanf("%d", &choice);
        if (checkChoice(arrBoard, choice) == 0) {
            printf("Invalid input, try again\n");
            continue;
        }

        markBoard(arrBoard, player, choice);
        drawboard(arrBoard);

        if (checkForWin(arrBoard) == 0) {
            printf("Player %d wins!\n", player);
            on = 0;
            break;
        }
        else if (checkForWin(arrBoard) == 2) {
            printf("Draw!\n");
            on = 0;
            break;
        }

        if (player == 1)
            player++;
        else if (player == 2)
            player--;
    }

    return 0;
}

void drawboard(char arrBoard[10]) {
    printf("\n %c | %c | %c ", arrBoard[1], arrBoard[2], arrBoard[3]);
    printf("\n-----------\n");
    printf(" %c | %c | %c ", arrBoard[4], arrBoard[5], arrBoard[6]);
    printf("\n-----------\n");
    printf(" %c | %c | %c \n\n", arrBoard[7], arrBoard[8], arrBoard[9]);
}

char markBoard(char arrBoard[10], int player, int choice) {
    if (player == 1)
        arrBoard[choice] = 'X';
    else if (player == 2)
        arrBoard[choice] = 'O';
}

int checkForWin(char arrBoard[10]) {
    if (arrBoard[1] == arrBoard[2] && arrBoard[2] == arrBoard[3])
        return 0;
    else if (arrBoard[4] == arrBoard[5] && arrBoard[5] == arrBoard[6])
        return 0;
    else if (arrBoard[7] == arrBoard[8] && arrBoard[8] == arrBoard[9])
        return 0;
    else if (arrBoard[1] == arrBoard[4] && arrBoard[4] == arrBoard[7])
        return 0;
    else if (arrBoard[2] == arrBoard[5] && arrBoard[5] == arrBoard[8])
        return 0;
    else if (arrBoard[3] == arrBoard[6] && arrBoard[6] == arrBoard[9])
        return 0;
    else if (arrBoard[1] == arrBoard[5] && arrBoard[5] == arrBoard[9])
        return 0;
    else if (arrBoard[3] == arrBoard[5] && arrBoard[5] == arrBoard[7])
        return 0;
    else if (
            arrBoard[1] != '1'
            && arrBoard[2] != '2'
            && arrBoard[3] != '3'
            && arrBoard[4] != '4' 
            && arrBoard[5] != '5'
            && arrBoard[6] != '6'
            && arrBoard[7] != '7'
            && arrBoard[8] != '8'
            && arrBoard[9] != '9'
        )
        return 2;
    else
        return 1;
}

int checkChoice(char arrBoard[10], int choice) {
    if (arrBoard[choice] == 'X' || arrBoard[choice] == 'O')
        return 0;
    else if (choice < 1 || choice > 9)
        return 0;
}
