#include<iostream>
#include<vector>

int main() {

	/*	Finding the number of time an element is repeated in an Array.
		Assumption: - Array only contains positive integers.
		Time complexity: O(n).
		Space complexity: O(n). i.e. Not Efficient.
	*/

	std::vector<int> A{ 3, 6, 8, 8, 10, 12, 15, 15, 15, 20 };

	std::vector<int> hash(20 + 1, 0); //size = max_element + 1

	for (int i = 0; i < A.size(); i++) {
		hash[A[i]]++;
	}

	for (int i = 0; i < hash.size(); i++) {
		if (hash[i] > 1) {
			std::cout << i << " occurs " << hash[i] << " times.\n";
		}
	}
	

}