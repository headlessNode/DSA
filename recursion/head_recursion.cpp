#include<iostream>

void func1(int x);

int main() {
	int x = 3;
	func1(x);
	return 0;
}

void func1(int x) {
	if (x > 0) {
		func1(x - 1);
		std::cout << x << " ";
	}
}