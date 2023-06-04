#include <iostream>
#include<vector>

int main()
{   
    /*
        Method: Brute Force
        Time complexity =  O(n^2)
        Space complexity = O(1)
    */
    std::vector<int> nums{ 6,3,8,10,16,7,5,2,9,14 };
    int k = 10;
    int count{};
    for (int i = 0; i < nums.size(); i++) {

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == k) {
                std::cout << nums[i] << " + " << nums[j] << " = " << k <<"\n";
            }
        }
    }

    /*
        Method: Simple Hashing/Bit set
        Time compelxity  = O(n).
        Space complexity = O(n).
    */
    std::vector<int> nums_1{ 6, 3, 8, 10, 16, 7, 5, 2, 9, 14 };
    int k_1 = 10;
    std::vector<int> hash(16 + 1, 0); // size = max_element + 1;

    for (int i = 0; i < nums_1.size(); i++) {
        if (k_1 < nums_1[i]) {
            // do nothing
            // just being lazy
        }
        else if (hash[k_1 - nums_1[i]] != 0) {
            std::cout << k_1 - nums_1[i] << " + " << nums_1[i] << " = " << k_1 << "\n";
        }
        hash[nums_1[i]]++;
    }


}

