#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> charMap;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (!charMap.count(s[right]) || charMap[s[right]] < left) {
                charMap[s[right]] = right;
                std::cout << s[right] << "right " << right << "\n";
                std::cout << s[left] << "left " << left << "\n";
                maxLength = max(maxLength, right - left + 1);
            } else {
                left = charMap[s[right]] + 1;
                charMap[s[right]] = right;
            }
        }
        
        return maxLength;
    }
};

int main (){
    Solution a;
    int ans = a.lengthOfLongestSubstring("tmmzuxt");
    std::cout << ans;
    return 0;
}