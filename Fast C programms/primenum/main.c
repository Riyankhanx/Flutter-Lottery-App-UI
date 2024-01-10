#include <stdio.h>
void prime(int);
int main()
{
    int y;
    prime(y);

   return 0;
}
void prime(int x){
     int n,count=0,i;
     printf("Enter a number to check\n");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
         if(n%i==0)
         {
             count++;
           }
         }
         if(count==2){
             printf("Number  is prime\n");
         }
         else{
         printf("Number  is not a prime\n");

         }
}


