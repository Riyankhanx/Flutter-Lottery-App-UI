#include <stdio.h>
#include <stdlib.h>
int main()
{
    float d,e,f;
    Totalbill(&c,&d,&e);
    printf("Total bill of apples is %.2f\n",d);
     printf("Total bill of bananas is %.2f\n",e);
      printf("Total bill of kiwi is %.2f\n",f);
        return 0;
}
void Totalbill(float *customer1,float *customer2,float *customer3){
float price_of_fruit[5]={0.75,0.60,0.80,1.20,1.00};
   *customer1=3*price_of_fruit[0];
   *customer2=2*price_of_fruit[1] ;
   *customer3=1*price_of_fruit[4];
}
