class Solution {
public:
    int sqaure_root(int x){
        int ans = 1;
        while(ans<=x/ans){
            ans++;
        }
        ans--;
        return ans; 
    }
    bool judgeSquareSum(int c) {
        int a = 0,b= sqaure_root(c);
        while(a<=b){
            long long x = (a*a*1LL)+(b*b*1LL);
            if(x==c)return true;
            else if(x<c){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};