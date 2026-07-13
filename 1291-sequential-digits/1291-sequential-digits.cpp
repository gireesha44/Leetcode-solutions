class Solution {
public:
    int gen_first(int cnt1){
        int ans=  0;
        int cnt= 0,x=1;
        while(cnt<cnt1){
            ans = ans*10+x;
            cnt++;
            x++;
        }
        return ans;
    }
    int gen_limit(int cnt1){
        int limit = 0,cnt=0;
        while(cnt<cnt1){
            limit=limit*10+1;
            cnt++;
        }
        return limit;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        long long x =low,cnt=1,y=0;
        while(x<0){
            y=x%10;
            x/=10;
            cnt++;
        }
        int gen = gen_first(cnt); 
        int limit = gen_limit(cnt);
        while(gen<=high){
            if(gen>=low)ans.push_back(gen);
            gen+=limit;
            if(gen%10==0){
                cnt++;
                gen = gen_first(cnt);
                limit = gen_limit(cnt);
            }
        }
        return ans;
    }
};