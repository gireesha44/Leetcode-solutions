class Solution {
public:
    string ans ="";
    int maxlen =-1;
    void expand(string s,int i,int j){
        int n = s.size();
        int start=i,end=j;
        while( start>=0 && end<n && start<=end && s[start]==s[end]){
            start--;
            end++;
        }
        start++;
        end--;
        if(maxlen<end-start+1){
            maxlen = end-start+1;
            ans = s.substr(start,end-start+1);
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return ans;
    }
};