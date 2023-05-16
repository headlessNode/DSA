/*
Following program prints the sum of
"n" consective natural numbers using
recursion. Time complexity O(n).
Space complexity O(n).
*/

#include<iostream>

int sum(int n);

int main() {
	int n = 5;
	std::cout << sum(n) << "\n";

	return 0;
}

int sum(int n) {

	if (n == 0) {
		return 0;
	}
	else{
		return sum(n-1) + n;
	}
}

/*
Following code prints sum of "n" natural
numebers using while loop. Time complexity
O(n/2) = O(n). Space Complexity O(1).

#include<iostream>


int main() {

	int n = 10;

	int sum{};

	while (n > 0) {
		sum += (n - 1) + n;
		n = n - 2;
	}
	std::cout << sum;

}
*/

/*
Following code uses formula (n(n+1))/2
to calculate sum of "n" natural numbers.
Time complexity O(1). Space complexity O(1).

#include<iostream>


int main() {

	int n = 10;
	int sum = (n * (n+1))/2
	std::cout << sum;

}

*/
