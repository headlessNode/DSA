#include <iostream>
#include <vector>
#include <algorithm>

/*
    Remove duplicate elements the array and count
    the number of unique elements.
    Time complexity = O(n).
*/

int main() {
    std::vector<int> nums{ 0,0,1,1,1,2,2,3,3,4,5,5,5,5,5,6,6,7,8,9 };

    // Find the minimum and maximum element in nums
    int minNum = *min_element(nums.begin(), nums.end());
    int maxNum = *max_element(nums.begin(), nums.end());

    // Calculate the range of values in nums
    int size = maxNum - minNum + 1;

    // Create a hash vector to store the count of each element
    std::vector<int> hash(size, 0);

    // Count the occurrence of each element in nums
    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i] - minNum]++;
    }

    int k = 0;

    // Assign the unique elements back to nums in ascending order
    for (int i = 0; i < size; i++) {
        if (hash[i] > 0) {
            nums[k] = i + minNum;
            k++;
        }
    }


    std::cout << k << "\n";

    return 0;
}
