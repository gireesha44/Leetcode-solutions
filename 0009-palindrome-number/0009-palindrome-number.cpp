class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=INT_MAX || x<=INT_MIN)return false;
        if(x<0)return false;
        long long n = x;
        long long ans =0;
        while(x!=0){
            int s = x%10;
            ans = ans*10+s;
            x/=10;
        }
        return ans==n?true:false;
    }
};