class Solution {
public:
    int numOfStrings(vector<string>& arr, string word) {
        int n = arr.size();
        unordered_map<string,int>mp;
        for(int i=0;i<word.size();i++){
            string s = "";
            for(int j=i;j<word.size();j++){
                s+=word[j];
                mp[s]++;
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end())ans++;
        }
        return ans;
    }
};