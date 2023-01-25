#include<iostream>

using namespace std;

//When the program executes the function call instruction the CPU stores the memory
//address of the instruction following the function call, copies the parameters of the
//function in a stack and finally transfers the control to the specified function.
//The CPU then executes the function code, stores the return value in the predefined memory/ register and returns the control to the calling function. This can become overhead 
//when the time taken for the program execution is less than the switching time between the caller function and called function (callie). for large function which takes a lot of time to execute the overhead is insignificant but for the small function the time needed to
//make the function call is lot more than the execution time of the function.
//that's why C++ provies an inline function to reduce this overhead.

inline int add(int a, int b) {
	return a+b;
}
int main() {
	cout << add(7, 4) << endl;
}
