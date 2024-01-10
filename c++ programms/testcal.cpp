#include<iostream>
using namespace std;
int main()
{
char op;
int  num1,num2;
cout<<"Enter operator for result "<<endl;
cin>>op;
cout<<"Enter  first and second operands "<<endl;
cin>>num1>> num2;

  switch(op){
  case '+':
    cout<<"Addition of  num1 and num2 is "<<num1+num2<<endl;
    break;
    case '-':
    cout<<"Subtraction of  num1 and num2 is "<<num1-num2<<endl;
    break;
      case '*':
    cout<<"Mul of  num1 and num2 is "<<num1*num2<<endl;
    break;
      case '/':
    cout<<"Div of  num1 and num2 is "<<num1/num2<<endl;
    break;

default:
cout<<"Error! incorrect operator ";
    break;
}


    return 0;
}

