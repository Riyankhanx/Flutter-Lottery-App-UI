#include <stdio.h>

void currency_checker(float,float,float);
int main()
{
   float price,quantity;
    char curr;
    currency_checker(price,quantity,curr);
    
    return 0;
}
void currency_checker(float x,float y,float z){
    float price,quantity,T_cost,dcount;
    char curr;
    printf("Enter the price per unit:");
    scanf("%f",&price);

    printf("Enter quantity:");
    scanf("%f",&quantity);

    printf("Enter currency (USD or EUR):");
    scanf(" %c",&curr);
    
    if(curr=='U'|| curr=='u'){
    T_cost=price *quantity;

    }
    else if(curr=='E'|| curr=='e'){
        T_cost=(price + (price* 0.20 )) * quantity;
    }
    else {
        printf("Invalid currency\n");
        return 1;
    }
if(T_cost>=1000.00){
    dcount= T_cost * 0.10;
}else
if(T_cost>=500.00 && T_cost<1000.0){
    dcount=T_cost*0.05;
}
else
{
    dcount=0.0;
}
T_cost = T_cost - dcount;
printf("Total cost $%.2f\n",T_cost); 
    
}
