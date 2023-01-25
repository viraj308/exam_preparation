#include<iostream>

using namespace std;

// function overloading is a feature of object oriented programming where 
// two or more functions can have the same name but different parameters.
// when a function's name is overloaded with different jobs then it is called function 
// overloading.
// function name same and arguments different -> function overloading
// function overloading is considered as an exmaple of polymorphism in OOP

//parameters with different type
void add(int a, int b) {
	cout << a+b << endl;
}
void add(double a, double b) {
	cout << a+b << endl;
}
// parameter with different type
void add(int a, int b, int c) {
	cout << a+b+c << endl;
}
// parameter with different sequence
void add(double a, int b) {
	cout << a+b << endl;
}
void add(int a, double b) {
	cout << a+b << endl;
}
int main() {
	add(1,4);
	add(1.4,1.8);
	add(1,2,3);
	add(1.2, 4);
	add(4, 1.2);
	return 0;
}

