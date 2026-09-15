class Solution {
public:
    bool checkPal(string &s,int l,int r){
        int i=l,j=r;
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n = s.size();
        if(k>n)return 0;
        int ans = 0,last_ended=-1;
        for(int j=0;j<n;j++){
            for(int i=last_ended+1;j-i+1>=k;i++){
                if(checkPal(s,i,j)){
                    ans++;
                    last_ended = j;
                    break;
                }
            }
        }
        return ans;
    }
};