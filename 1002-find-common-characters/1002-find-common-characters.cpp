class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        unordered_map<string, int> mp;

        for (int i = 0; i < 26; i++) {

            string c = string(1, 'a' + i);

            int minFreq = INT_MAX;

            for (string x : words) {

                int freq = 0;

                for (char ch : x) {
                    if (ch == c[0]) {
                        freq++;
                    }
                }

                minFreq = min(minFreq, freq);
            }

            mp[c] = minFreq;
        }

        vector<string> ans;

        for (auto &p : mp) {
            while (p.second--) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};