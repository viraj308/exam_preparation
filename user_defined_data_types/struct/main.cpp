#include<iostream>

using namespace std;

struct boy {
	int age;
	string name;
};
int main() {
	struct boy viraj;
	viraj.age = 23;
	viraj.name = "viraj";
	cout<< viraj.age << endl;
	cout<< viraj.name << endl;
	return 0;
}
