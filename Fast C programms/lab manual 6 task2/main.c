#include <stdio.h>

float totalpay(float,float);

int main() {
    float  hourrate,hoursworked;
  printf("Enter  the hour rate:");
    scanf("%f",&hourrate);
    printf("Enter the total hours  worked:");
    scanf("%f",&hoursworked);
   totalpay(hourrate,hoursworked);
   
    return 0;
}
float totalpay(float hourrate,float hoursworked){
   float hworked,salary,overtimeh,overtimepay,tax;

    if (hworked>40) {
        overtimeh=hworked-40;
        overtimepay=overtimeh*1.5*hourrate;
        salary =40*hourrate+overtimepay;
    }
    else {
        salary =hworked*hourrate;
    }
    tax=0.2*salary;
    salary =salary-tax;
    printf("Now the overall salary after tax deduction were %f.0\n",salary);
    }
