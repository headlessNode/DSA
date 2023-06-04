#include<iostream>
#include<vector>

int main() {

	/*
		Rotating sorted list k times.
		Time complexity: O(k * n)
	*/

	std::vector<int> nums{ 1,2,3,4,5,6,7 };

	int k = 3;

	for (int i = 0; i < k;i++) {
		int size = nums.size() - 1;

		int temp{ nums[size] };

		for (int i = size, j = size - 1; i > 0; i--, j--) {
			nums[i] = nums[j];
		}

		nums[0] = temp;
	}


}