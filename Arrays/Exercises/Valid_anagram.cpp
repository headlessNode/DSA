#include <iostream>
#include<algorithm>
#include<vector>

int main()
{
    /*
        Finding if input strings are anagrams.
        Time complexity: O(n)
        Space complexity: O(1)
    */

    std::string s {"car"};
    std::string t{ "rat" };
    
    
    if (s.size() != t.size()) {
        return false;
    }

    std::vector<int> hash(26, 0);

    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 97]++;
    }

    for (int i = 0; i < t.size(); i++) {
        hash[t[i] - 97]--;
    }

    for (int i = 0; i < hash.size(); i++) {
        if (hash[i] != 0) {
            return false;
        }
    }
    return true;
}



