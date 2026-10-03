class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int cand1=INT_MIN,cand2=INT_MIN,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(c1==0 && cand2!=nums[i]){
                cand1=nums[i];
                c1=1;
            }
            else if(c2==0 && cand1!=nums[i]){
                cand2=nums[i];
                c2=1;
            }
            else if(cand1==nums[i])c1++;
            else if(cand2==nums[i])c2++;
            else {
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(cand1==nums[i])c1++;
            if(cand2==nums[i])c2++;
        }
        if(c1>n/3)ans.push_back(cand1);
        if(c2>n/3)ans.push_back(cand2);
        return ans;
    }
};