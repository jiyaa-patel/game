#include<stdio.h>

void playTicTacToe();
void playMinesweeper();
void playHangman();
void printboard(char board[3][3]);

int main(){
    menu:
    printf("choose from the below:\n\n1.TicTacToe\n2.Minesweeper\n3.Hangman\n ");
    int a;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        playTicTacToe();
        break;

    case 2:
        playMinesweeper();
        break;
    
    case 3:
        playHangman();
        break;
    
    default:
        printf("Enter a valid entry");
        goto menu;
    }
    return 0;
}

void playTicTacToe(){
    printf("Toe-tally funnn:\n");
    char board[3][3] = {{'1','2','3'}, {'4','5','6'},{'7','8','9'}};
    printboard(board);
    printf("Let the player1 begin first: ");
    printf("Enter the position where you want to place your X: ");
    int pos;
    if(pos<=9 && )


    
}

void printboard(char board[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %c ",board[i][j]);
            if (j < 2) printf("|"); // Add separator between columns
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n"); //separator btwn rows
    }
}

void playMinesweeper() {
    printf("Minesweeper coming soon!\n");
}

void playHangman() {
    printf("Hangman coming soon!\n");
}