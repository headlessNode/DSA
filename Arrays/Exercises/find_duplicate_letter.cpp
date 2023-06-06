#include<iostream>
#include<string>

int main() {
    /*
        Finding duplicate letters in a string using
        bit masking and merging.
        Time complexity: O(n)
        Space complexity: O(1)
    */

    std::string s = "finding";
    int H = 0;
    int x = 0;

    for (int i = 0; i < s.size(); i++) {
        x = 1;
        x = x << (s[i] - 'a');
        if ((x & H) > 0) {
            std::cout << s[i] << " is a duplicate letter.\n";
        }
        else {
            H = H | x;
        }
    }

    /*
        Finding unique number in an Array.
        Time complexity: O(n).
        Space complexity: O(1).

        To solve this problem using bit manipulation.
        XORing a number with itself results in 0, and XORing a number with 0 results in the number itself. 
        If we XOR all the numbers in the array, the duplicate numbers will cancel out, and we will be left with the single number.
    */
    int result{};

    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];
    }
    std::cout<< result<<" is the unique number.\n";
}
