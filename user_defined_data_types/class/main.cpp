#include<iostream>

using namespace std;

class boy {
	public:
		char name[8] = "viraj";
		void print_name() {
			cout<<"my name is "<< name << endl;
		}

};
int main() {
	boy viraj;
	cout << viraj.name << endl;
	viraj.print_name();
	return 0;
}
