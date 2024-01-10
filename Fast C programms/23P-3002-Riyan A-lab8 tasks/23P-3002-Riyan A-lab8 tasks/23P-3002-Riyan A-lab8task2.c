#include <stdio.h>

void print_Table(int);
int main() {
    int x;
    char c;
    do {
        printf("Enter a number to print its multiplication table: ");
        scanf("%d", &x);
         print_Table(x);
        printf("Do you want to print another multiplication table (Y/N)? ");
        scanf(" %c", &c);

    }
    while (c=='Y'||c=='y');

        if(c=='N'||c=='n'){
            printf("Try  again");
        }
        else{
            printf("select Y or y for further table");
        }
    return 0;
}
void print_Table(int n) {
    int i,k;
    printf("\nEnter any number");
    scanf("%d",&k);
    for (i=1;i<=10;i++) {
        printf("%d*%d =%d\n",k,i,k*i);
    }
}
