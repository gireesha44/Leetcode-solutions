class Solution {
public:
    int maxProduct(int n) {
        int maxi = 0,prev_maxi = 0;
        while(n>0){
            int digit = n%10;
            int s = 0;
            if(digit>maxi){
                prev_maxi = maxi;
                maxi = digit;
                s=1;
            }
            if(prev_maxi<digit && s==0)prev_maxi = digit;
            n/=10;
        }
        return maxi*prev_maxi;
    }
};