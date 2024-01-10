#include <stdio.h>
int a,b;
void addition(){
    
printf("Add of and b is %d",a+b);
}
void subtraction(){
   printf("Sub of and b is %d",a-b);
}
void getval(){
printf("Enter value of a");
scanf("%d",&a);
printf("Enter value of b");
scanf("%d",&b);

}
int main()
{
getval();
addition();
subtraction();

    return 0;
}

