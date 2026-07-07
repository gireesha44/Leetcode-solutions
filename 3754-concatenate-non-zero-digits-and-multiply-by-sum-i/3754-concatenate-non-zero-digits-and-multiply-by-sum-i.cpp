class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        int x = 0;
        int temp =n;
        while(n>0){
            int digit = n%10;
            if(digit!=0)x = x*10+digit;
            sum+=digit;
            n=n/10;
        }
        cout<<x<<endl;
        int ans =0;
        while(x>0){
            ans=ans*10+(x%10);
            x/=10;
        }
        return 1LL*sum*ans;
    }
};