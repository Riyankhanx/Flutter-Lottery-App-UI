#include<iostream>
using namespace std;

class Human{

public:
int height;
int age;
int weight;

public:
int getAge(){
    return this->age;
}
void setWeight(int w){
    this->weight=w;
}

int getHeight(){
    return this->height;
}
void setHeight(int h){
    this->height=h;
}
};
 class Student:public Human{
public:
string color;
void sleep(){
    cout<<"Sleeping "<< endl;
}
 };
int main()
{
Student object1;
object1.age;
cout<<object1.age<< endl;
object1.setWeight(84);
cout<<object1.weight<<endl;
object1.sleep();
object1.setHeight(5);
cout<<object1.height<< endl;




    return 0;
}
