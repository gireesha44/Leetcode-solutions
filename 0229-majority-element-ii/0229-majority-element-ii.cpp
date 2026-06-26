class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int c1=0,c2=0,candidate1=INT_MAX,candidate2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate1){
                c1++;
            }
            else if(nums[i]==candidate2){
                c2++;
            }
            else if(c1==0){
                candidate1 = nums[i];
                c1=1;
            }
            else if(c2==0){
                candidate2 = nums[i];
                c2= 1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(candidate1==nums[i])c1++;
            else if(candidate2==nums[i])c2++;
        }
        if(c1>n/3 && c2>n/3)return {candidate1,candidate2};
        else if(c1>n/3)return {candidate1};
        else if(c2>n/3)return {candidate2};
        else return {};
    }
};