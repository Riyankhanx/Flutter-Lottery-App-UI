//Syntax of operator overloading
//return type operator + ()
//{
//}
//Compile time polymorphism
//It is also called static  polymorphism
#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;

    public:
    int  add(){
    return a+b;
}
void  operator+(B &obj){
    int value1=this->a;
    int value2=obj.a;
    cout <<"output "<< value2-value1 << endl;
    
    //cout <<"Hello Riyan "<< endl;
  }
  void operator() (){
    cout<<"This is bracket "<<this->b<< endl;
  }
};
int main(){
B obj1, obj2;
obj1.a=4;
obj2.b=7;

obj1 + obj2;
obj2();








 return 0;

}