#include<iostream>

void fun1(int n);
void fun2(int n);

int main() {
	int n = 6;
	fun1(n);
}

void fun1(int n) {
	if (n > 0) {
		std::cout << n << " ";
		fun2(n - 1);
	}
}

void fun2(int n) {
	if (n > 1) {
		std::cout << n << " ";
		fun1(n / 2);
	}
}