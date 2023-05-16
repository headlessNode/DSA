#include<iostream>

int fun1(int n);

int main() {
	int n = 95;
	int r{};
	r = fun1(n);
	std::cout << r << " ";
	return 0;
}

int fun1(int n) {
	if (n > 100) {
		return n - 10;
	}
	else {
		return fun1(fun1(n + 11));
	}

}