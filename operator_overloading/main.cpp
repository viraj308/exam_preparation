#include<iostream>

using namespace std;

class inc {
	private:
		int num = 0;
	public:
		void operator ++ () {
			++num;
	}
		void show() {
			cout<<num<<endl;
		}	
};
int main() {
	inc A;
	++A;
	A.show();
}
