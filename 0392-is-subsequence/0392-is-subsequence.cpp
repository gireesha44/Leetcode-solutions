class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(s=="")return true;
        if(t=="")return false;
        int i=0,j=0,cnt=0;
        while(j<m){
            if(s[i]==t[j]){
                i++;
                cnt++;
            }
            j++;
        }
        return cnt==n;
    }
};