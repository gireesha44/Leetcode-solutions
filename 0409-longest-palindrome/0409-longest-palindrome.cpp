class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int length = 0;
        bool hasOddCount = false;
        
        for (auto& pair : mp) {
            int count = pair.second;
            length += (count / 2) * 2;
            if (count % 2 != 0) {
                hasOddCount = true;
            }
        }
        
        if (hasOddCount) {
            length += 1;
        }
        
        return length;
    }
};
