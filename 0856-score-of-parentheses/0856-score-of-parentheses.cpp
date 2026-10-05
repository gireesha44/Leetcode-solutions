class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int open =0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')open++;
            else{
                open--;
                if(s[i-1]=='('){
                    ans+=(1<<open);
                }
            }
        }
        return ans;
    }
};