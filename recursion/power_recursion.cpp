#include<iostream>

// Recursive function to calculate the power of a number
// Time complexity: O(n)
// Space complexity: O(n), due to the recursive function calls

int rec_power(int num, int pwr);

int main() {
	int num{ 4 };
	int pwr{ 5 };
	int r{};
	r = rec_power(num, pwr);
	std::cout << r << "\n";
}

int rec_power(int num, int pwr) {
	// Base case: power is 0
	if (pwr == 0) {
		return 1;
	}
	// Recursive case: power is even
	else if (pwr % 2 == 0) {
		return rec_power(num * num, pwr / 2);
	}
	// Recursive case: power is odd
	else {
		return num * rec_power(num * num, (pwr - 1) / 2);
	}
}

/*
Iterative method:
Space complexity: O(1), as it uses a constant amount of additional space
Time complexity: O(pwr), where pwr is the power
if (pwr > 0) {
	int r = 1;
	for (int i = 1; i <= pwr; i++) {
		r *= num;
	}
	return r;
}
*/
