#include <stdio.h>

void printBoard();
int checkWin();
void system();
char board[]={'0','1','2','3','4','5','6','7','8'};

int  main(){
    int player=1,input,s=-1;
    int result;
    printBoard();
    char choice;


    while(s==-1)
    {
        player=(player%2==0)?2:1;
        char mark=(player==1)?'X':'Y';
        printf("Enter Number For Player %d:\n",player);
        scanf("%d",&input);
    if(input<1||input>8){
        printf("invalid input");
    }


    board[input]=mark;
    printBoard();
     printBoard();
    result=checkWin();

    if(result==1){
        printf("\tCongrats! Player (%d)\n\tYou are the Winner...",player);
            printf("Do you want to play again(Y/N):");
scanf("%d",&choice);
if(choice=='Y'||choice=='y'){
	player=1;
	 printBoard();
	  result=checkWin();
    if(result==1){
        printf("\tCongrats! Player (%d)\n\tYou are the Winner...",player);
}
else
	if(result==0){
		printf("draw");
	}

	 
}else

if(choice=='N'||choice=='n'){
	player=0;
}
        return;

 
    }
    else if(result==0)
    {
        printf("\n draw");
        return;
    }
    player++;
    }

}
void printBoard(){
    system("cls");

    printf("\n\n");
    printf("\n\t==> TIC TAC TOE<== \n\t    GAME START \n\n");
    printf("\t     |     |     \n");
    printf("\t   %c |  %c  |   %c \n",board[0],board[1],board[2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t   %c |  %c  |   %c \n",board[3],board[4],board[5]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t   %c |  %c  |    %c \n",board[6],board[7],board[8]);
    printf("\t     |     |     \n");
    printf("\n\n");
}
int checkWin(){

    if(board[0]==board[1]&&board[1]==board[2]){
        return 1;
    }
    if(board[0]==board[3]&&board[3]==board[6]){
        return 1;
    }
    if(board[6]==board[7]&&board[7]==board[8]){
        return 1;
    }
    if(board[2]==board[5]&&board[5]==board[8]){
        return 1;
    }
    if(board[0]==board[4]&&board[4]==board[8]){
        return 1;
    }
    if(board[2]==board[4]&&board[4]==board[6]){
        return 1;
    }
    if(board[1]==board[4]&&board[4]==board[7]){
        return 1;
    }
    if(board[3]==board[4]&&board[4]==board[5]){
        return 1;
    }

    int count=0;

    for (int i=0;i<9;i++)
    {
        if(board[i]=='X'||board[i]=='Y'){
            count++;
        }
    }

    if(count==8){
        return 0;
    }   
    return -1;
}

