#include <stdio.h>

void Order(int burger,int add_on) {
    int totalprice =0;
    if (burger) {
        totalprice = totalprice+ 500;
    }

    if (add_on) {
        totalprice = totalprice+200;
    }
    printf("Your total order price is:Rs %d\n",totalprice);
}

int main() {
    char userchoice;
    int burger,add_on;
    printf("Do you want a burger? (Y/N):");
    scanf("%c",&userchoice);
    if(userchoice=='Y'||userchoice=='y')
        {
        burger = 1;
    } else {
        burger = 0;
    }
    if (burger) {
        printf("Do you want an add-on of fries and cold drink? (Y/N):");
        scanf(" %c", &userchoice);
        if (userchoice=='Y'||userchoice=='y')
        {
            add_on=1;
        }
        else if(userchoice=='N'||userchoice=='n')
        {
            add_on=0;
        }
else
        {
            printf("Invalid input");
        }
    }
    //else
        //{
        //add_on=0;
   // }
    Order(burger,add_on);

    return 0;
}
