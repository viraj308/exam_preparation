#include<iostream>

using namespace std;

// union is like structures where all the it's members share the same memory location

union lol {
	int x, y;
};
int main() {
	union lol a;
	a.x = 5;
	cout<< a.x << endl;
	cout<< a.y << endl;
	return 0;
}
