//purpose : To find time Force
//Writer : Riyan Ahmad Khan
// Date : 9-sept-2023
/*

#include<stdio.h>
int main(){



int F,m,a;

a=50;
m=30;

 F=50*30;
printf("The totalForce is %d ",F);

return 0;
*/
#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, h;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    // Calculate the length of the hypotenuse using the Pythagorean theorem
      h= sqrt(pow(side1, 2) + pow(side2, 2));

    // Output the result
    printf("The length of the hypotenuse is: %lf\n", h);

    return 0;
}

