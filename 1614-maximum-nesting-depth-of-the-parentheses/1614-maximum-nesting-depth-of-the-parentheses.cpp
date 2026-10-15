class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans = 0,open = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
                ans = max(ans,open);
            }
            else if(s[i]==')') open--;
        }
        return ans;
    }
};