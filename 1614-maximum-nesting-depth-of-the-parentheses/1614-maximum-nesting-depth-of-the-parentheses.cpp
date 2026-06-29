class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int cnt = 0,maxi=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')cnt++;
            maxi = max(maxi,cnt);  
            if(s[i]==')')cnt--;
            if(cnt==0){
                ans= 0;
            }
        }
        return maxi;
    }
};