#include<iostream>
#include<conio.h>
using namespace std;

//class Animal{
//	public:
//	int health;
//	private:
//	char level;
//	
//	void print(){
//		cout<<level <<endl;
//	}
//	
//};
 
 class Hero{
// 	//properties of object
    private:
    int health;
    public:
	char level;
	
Hero(){
	cout<<"Constructor is called" <<endl;
}	
	
  void print(){
 	cout<<level<<endl;
}
int getHealth(){
	return health;	
}
char getLevel(){
	return level;
	
}
void setHealth(int h){
	health=h;
}
void setLevel(char ch){
     level=ch;
}
// 	//private:
//// 	public:	
////int health;
// 	
// 		//char level;
//
//
 };
// 
// 	
int main()
{
//  cout<<"Hi "<<endl;	
	Hero riyan;
//	cout<<"Hello "<<endl;
//static allocation
//	Hero a;
//	a.setLevel('B');
//	a.setHealth(70);
//	cout<<"level is "<<a.level <<endl;
//	cout<<"health is "<<a.getHealth() <<endl;
//	
//	//	dynamically
	Hero*b=new Hero;
//	(*b).setLevel('A');
//	(*b).setHealth(60);
//	//OR
//	//b->setLevel('A');
//	//b->setHealth(70);
//	cout<<"level is "<<(*b).level <<endl;
//	cout<<"health is "<<(*b).getHealth() <<endl;
//	//OR
//	cout<<"level is "<<b->level <<endl;
//	cout<<"health is "<<b->getHealth() <<endl;
////  Animal  tiger;
////cout<<"health is :"<<tiger.health <<endl;
////cout<<"level is :"<<tiger.level <<endl;
// Hero riyan;
// cout<<"riyan health is "<<riyan.getHealth()<<endl;
// riyan.setHealth(100);
// //riyan.health=100;
// riyan.level='A';
// cout<<"size of riyan is : "<<sizeof(riyan)<<endl;
//////cout<<"size  is : "<<sizeof(n1);	
//cout<<"health is :"<<riyan.getHealth()<<endl;
//cout<<"level is :"<<riyan.level <<endl;
	
	getch();
	return 0;
	
}

