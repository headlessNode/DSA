#include<iostream>

void fun1(int n);

int main() {
	int n = 3;
	fun1(n);
	return 0;
}

void fun1(int n) {
	if (n > 0) {
		std::cout << n << " ";
		fun1(n - 1);
		fun1(n - 1);
	}

}