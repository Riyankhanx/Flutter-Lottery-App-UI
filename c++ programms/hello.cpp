#include<iostream>
#include<conio.h>
using namespace std;


class A{
	public:
		void sayHello(){
			cout<<"Hello this is riyan " << endl;
        }
        public:
		int sayHello(char name){
			cout<<"Hello this is riyan " << endl;
            return 1;
        }
		void sayHello(string name){
			cout<<"Hello" <<name << endl;
			
		}
};
int main()
{
A obj;
obj.sayHello();	
	
	
	getch();
	return 0;
}