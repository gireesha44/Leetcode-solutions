class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        map<int,string>mp2;
        for(auto &p:mp){
            int x = p.second;
            while(x--)mp2[p.second]+=p.first;
        }
        string ans="";
        for(auto &p:mp2){
            ans+=p.second;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};