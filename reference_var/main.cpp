#include<iostream>
using namespace std;

void swap(int& one, int& two) {
	int temp;
	temp = one;
	one = two;
	two = temp;
}
// When variable is declared as a reference, then it becomes an alias for the existing 
// variable. changing it's value will result in the change the variable value too
int main() {
	int x = 2;
	int& y = x;
	y = 3;
	cout<<"x :"<< x << endl;
	cout<<"y :"<< y << endl;
	int a = 2;
	int b = 4;
	cout<<"a :"<< a << endl;
	cout<<"b :"<< b << endl;
	swap(a, b);
	cout<<"a :"<< a << endl;
	cout<<"b :"<< b << endl;

};
