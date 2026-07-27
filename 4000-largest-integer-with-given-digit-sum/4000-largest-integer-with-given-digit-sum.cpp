class Solution {
public:
    int largestInteger(int n, int s) {
        int start = 0;
        while(n--){
            start = (start*10)+9;
        }
        for(int i=start;i>=0;i--){
            int temp = i,sum = 0;
            while(temp>0){
                sum+=(temp%10);
                temp/=10;
            }
            if(sum==s)return i;
        }
        return -1;
    }
};