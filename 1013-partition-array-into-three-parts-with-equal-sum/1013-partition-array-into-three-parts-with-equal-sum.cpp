class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0,s=0;
        for(int x:arr)sum+=x;  
        if(sum%3!=0)return false;
        sum = sum/3;
        int cnt = 0,y=0;
        for(int i=0;i<n;i++){
            y+=arr[i];
            if(y==sum){
                cnt++;
                y = 0;
            }    
        }
        return cnt >= 3;
    }
};