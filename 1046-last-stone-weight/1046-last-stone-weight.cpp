class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==1)return stones[n-1];
        for(int i=0;i<n;i++){
            sort(stones.begin(),stones.end());
            int y = stones[n-1];
            int x = stones[n-2];
            int diff = y-x;
            if(stones[n-2]==0)break;
            if(diff>=0){
                stones[n-1] = diff;
                stones[n-2] = 0;
            }
        }
        return stones[n-1];
    }
};