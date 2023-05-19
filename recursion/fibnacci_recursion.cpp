#include<iostream>

int fib(int n);

int main() {

	int n{7};

	int r = fib(n);

	std::cout << r << "\n";
	return 0;
}

int fib(int n) {

	if (n <= 1) {
		return n;
	}

	else {
		return fib(n - 1) + fib(n - 2);
	}
}
