/*
Following program prints the sum of
"n" consective natural numbers
*/

#include<iostream>

int func1(int n);

int main() {
	int n = 5;
	std::cout << func1(n) << "\n";

	return 0;
}

int func1(int n) {

	if (n > 0) {
		return func1(n - 1) + n;
	}
	return 0;
}