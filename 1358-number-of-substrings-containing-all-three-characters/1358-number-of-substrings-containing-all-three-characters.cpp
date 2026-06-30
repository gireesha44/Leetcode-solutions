class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        mp['a'] = 1;
        mp['b'] = 1;
        mp['c'] = 1;
        int cnt = 0,ans = 0;
        int i=0, j=0;
        while(j<n){
            mp[s[j]]--;
            if(mp[s[j]]==0)cnt++;
            while(cnt==3){
                mp[s[i]]++;
                if(mp[s[i]]==1)cnt--;
                i++;
            }
            ans+=(i);
            j++;
        }
        return ans;
    }
};