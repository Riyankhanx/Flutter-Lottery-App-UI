#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1,num2;
cout<<"Enter operands for calculation "<<endl;
cin>>num1>>num2;

switch(op)
case'+':
    cout<<"Addition of num1 and num2 is "<<num1+num2<<endl;
case'-':
    cout<<"Subtraction of num1 and num2 is "<<num1-num2<<endl;
   case'*':
    cout<<"Multiplication  of num1 and num2 is "<<num1*num2<<endl;
   case'/':
    cout<<"Division  of num1 and num2 is "<<num1/num2<<endl;
   default:
    cout<<"invalid operator try again ";
    return 0;
}
