class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n-k+1;i++){
            unordered_set<int>st;
            for(int j=i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(auto x:st)mp[x]++;
        }
        int maxi  =-1;
        for(auto &p:mp){
            if(p.second==1){
                maxi=max(maxi,p.first);
            }
            cout<<p.first<<" "<<p.second<<endl;
        }
        return maxi;
    }
};