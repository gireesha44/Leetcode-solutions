class Solution {
public:
    pair<int,int> check(string s,int i,int j){
        int n = s.size();
        while(i>=0 && j<n && s[i]==s[j]){
            i--;
            j++;
        }
        return {j-i-1,i+1};
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int max_len = 1;
        int start = 0;
        for(int i=0;i<n;i++){
            pair<int,int> x = check(s,i,i);
            pair<int,int> y = check(s,i,i+1);
            if(max_len<x.first){
                max_len = x.first;
                start = x.second;
            }
            if(max_len<y.first){
                max_len = y.first;
                start = y.second;
            }
        }
        return s.substr(start,max_len);
    }
};