#include<iostream>

int main()
{
	/*	Find single missing element in a sorted Array. Time complexity O(n). */
		
		int A[]{6,7,8,9,11,12,13,14,15};

		int diff = 6;

		for (int i = 0; i < 9; i++) {
		if (A[i] - i != diff) {
			std::cout << "Missing Element: " << diff + i << "\n";
			break;
			}
		}
	

	

	/* Finding Multiple Missing elements in a sorted Array. Time complexity O(n). */

	int A[]{ 6,7,8,9,11,12,15,16,17,18 };

	int diff = 6;//difference = A[0] - index

	for (int i = 0; i < 10; i++) {
		if (A[i] - i != diff) {
			while (diff < A[i] - i) {
				std::cout << "Missing element: " << diff + i << "\n";
				diff++;
			}
		}
	}

	return 0;
}