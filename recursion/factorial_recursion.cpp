#include<iostream>

/*
A factorial is a function that multiplies a number by every number below it till 1. 
For example, the factorial of 3 represents the multiplication of numbers 
3, 2, 1, i.e. 3! = 3 × 2 × 1 and is equal to 6.
*/
int fact(int n);/*Prototype of function which uses recursion to calculate factorial*/

int fact1(int n); /*Prototype of function fact1 which uses iterative method to calculate factorial*/

int main() {
	int n = 3;
	int f = fact(n);
	std::cout << f << "\n";
	return 0;
}

int fact(int n) {
	if (n == 0){
		return 1;
	}
	else {
		return fact(n - 1) * n;
	}
}

int fact1(int n)
{
	int x = 1;
	for(int i = 0; i<n ; i++){
		x = x * i;
	}
	return x;
}
