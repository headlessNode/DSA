#include<iostream>

void func1(int x);

int main() {
	int x = 3;
	func1(3);
}

void func1(int x) {
	if (x > 0) {
		std::cout << x << " ";
		func1(x - 1);
	}
}