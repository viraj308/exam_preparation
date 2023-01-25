#include<iostream>

using namespace std;


//enum is mainly used to assign names to integral constants, names make programs easy to read
enum anime {
	death, fairy, vinland
};
int main() {
	typedef int loli;
	loli num = 3;
	enum anime fav;
	fav = death;
	cout << fav << endl;
	cout << num << endl;
	return 0;
}
