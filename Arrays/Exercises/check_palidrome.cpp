#include<iostream>
#include<vector>

int main() {

	/*
		Checking if input string is a palindrome.
		Time complexity = O(n)
		Space complexity = O(n)
	*/

	std::string s{ "A man, a plan, a canal: Panama" };

	std::vector<char> A1;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) { // Check if the character is uppercase
			A1.push_back(s[i] + 32); // Convert uppercase to lowercase by adding 32 to the ASCII value
		}
		else if (s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57) { // Check if the character is lowercase or a digit
			A1.push_back(s[i]); // Store the lowercase letter or digit
		}
	}

	for (int i = 0, j = A1.size() - 1; i <= j; i++, j--) {
		if (A1[i] == A1[j]) { // Compare characters from the start and end of the vector
			// Do nothing
		}
		else {
			std::cout << "Not Palindrome\n";
			return false; // Return false if characters do not match
		}
	}

	std::cout << "Is Palindrome\n";
	return true; // Return true if all characters match
}
