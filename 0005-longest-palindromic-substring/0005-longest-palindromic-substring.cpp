class Solution {
public:
    int start = 0,maxlen =1;
    void expand(string s,int i,int j){
        while(i>=0 && j<s.size() && s[i]==s[j]){
            int len = j-i+1;
            if(len>maxlen){
                maxlen = len;
                start = i;
            }
            i--;
            j++;
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int i=0;
        while(i<n){
            expand(s,i,i);
            expand(s,i,i+1);
            i++;
        }
        return s.substr(start,maxlen);
    }
};