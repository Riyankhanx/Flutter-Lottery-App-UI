#include<stdio.h>
char Box[]={'0','1','2','3','3','4','5','6','7','8','9'};
void Creating_Board();
void marking_Board(int,char);
int Check_for_Win();
void system();

int main(){
    int choice,player=1,i;
    char mark;
    do{
     Creating_Board();

    player=(player%2)?1:2;

    printf("Player %d enter a number ",player);
    scanf("%d",&choice);

    mark=(player==1)?'X':'0';
    marking_Board(choice,mark);

    i=Check_for_Win();
    player++;
        }
        while(i==-1);
    Creating_Board();
    if(i==1)
        printf("Player %d you have won the game",--player);
    else
        printf("<-------Draw-------->");

return 0;
}
void Creating_Board(){

printf("\n\n\t Tic Tac Toe\n\n");
system("cls");
printf("Player 1:(X)---Player 2:(0)\n\n");
 printf("     |     |     \n");
 printf("  %c  |   %c |    %c  \n",Box[1],Box[2],Box[3]);
 printf("_____|_____|_____\n");
 printf("     |     |     \n");
 printf("  %c  |   %c |    %c  \n",Box[4],Box[5],Box[6]);
 printf("_____|_____|_____\n");
 printf("     |     |     \n");
 printf("  %c  |   %c |    %c  \n",Box[7],Box[8],Box[9]);
 printf("     |     |        \n");

}
void marking_Board(int choice,char mark)
{
    if(choice==1 &&Box[1]=='1'){
        Box[1]=mark;
    }
    else
        if(choice==2 && Box[2]=='2'){
        Box[2]=mark;
    }
     else
        if(choice==3 && Box[3]=='3'){
        Box[3]=mark;
    }
     else
        if(choice==4 && Box[4]=='4'){
        Box[4]=mark;
    }
     else
        if(choice==5 && Box[5]=='5'){
        Box[5]=mark;
    }
     else
        if(choice==6 && Box[6]=='6'){
        Box[6]=mark;
    }
     else
        if(choice==7 && Box[7]=='7'){
        Box[7]=mark;
    }
     else
        if(choice==8 && Box[8]=='8'){
        Box[8]=mark;
    }
     else
        if(choice==9 && Box[9]=='2'){
        Box[9]=mark;
    }
    else
        printf("Invalid move try again\n");
}
int Check_for_Win(){

if(Box[1]==Box[2]&&Box[2]==Box[3])
    return 1;

else if(Box[4]==Box[5]&&Box[5]==Box[6])
    return 1;

else if(Box[7]==Box[8]&&Box[8]==Box[9])
    return 1;

else if(Box[1]==Box[4]&&Box[4]==Box[7])
    return 1;

    else if(Box[2]==Box[5]&&Box[5]==Box[8])
    return 1;

    else if(Box[3]==Box[6]&&Box[6]==Box[9])
    return 1;


    else if(Box[1]==Box[5]&&Box[5]==Box[9])
    return 1;
    else if(Box[3]==Box[5]&&Box[5]==Box[7])
    return 1;

    else if(Box[1]!='1'&&Box[2]!='2'&&Box[3]!='3'&&Box[4]!='4'&&Box[5]!='5'&&Box[6]!='6'&&Box[7]!='7'&&Box[8]!='8'&&Box[9]!='9')
            return 0;
    else
        return -1;
    }

