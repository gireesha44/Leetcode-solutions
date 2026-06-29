class Solution {
public:
    int numOfStrings(vector<string>& arr, string word) {
        int n = arr.size();
        int ans = 0;
        for(string s:arr){
            if(word.find(s)!=string::npos)ans++;
        }
        return ans;
    }
};