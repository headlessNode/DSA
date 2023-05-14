/*Result for both static and global variables is the same
because both static and global variables are created in 
the code section of the memory instead of the stack*/

#include<iostream>

int func1(int n);

int main() {
	int n = 5;

	std::cout << func1(n) << " ";
	return 0;
}

int func1(int n) {
	
	static int x;

	if (n > 0) {
		x++;
		return func1(n - 1) + x;
	}
	return 0;
}