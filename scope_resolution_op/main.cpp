#include<iostream>
using namespace std;

class Cry {
	public:
		void cry(); // just declaration
};
void Cry::cry() { // is also used to define a function outside a class
	cout<<"someone just cried"<<endl;
}

class Boy {
	public:
		static int name;
	
};
int Boy::name = 78;

int x = 1;

// Multiple inheritance example

class I {
	protected:
		int x = 3;
	
};
class L {
	protected:
		int x = 10;
};
class Y: public I, public L {
	public:
		void fun() {
			cout<< "x in I is: "<< I::x << endl;
			cout<< "x in L is :"<< L::x << endl;
		};
};
int main() {
	// 1st use is to access a global variable when there is a local variable
	int x = 2;
	cout<<"x global: "<< ::x << endl;
	cout<<"x local: "<< x << endl;
	Cry a;
	a.cry();
	Boy boy;
	cout<<boy.name<<endl;
	cout<<Boy::name<<endl; // accessing static variable using class name and scope resolution operator
	Y cam;
	cam.fun();
	return 0;

}
