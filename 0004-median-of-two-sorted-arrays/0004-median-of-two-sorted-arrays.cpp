class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(((n1+n2)&1)){
            int n = (n1+n2)/2;
            int i=0,j=0,cnt=0;
            while(i<n1 && j<n2){
                if(nums1[i]<nums2[j]){
                    if(cnt==n)return nums1[i];
                    cnt++;
                    i++;
                }
                else{
                    if(cnt==n)return nums2[j];
                    cnt++;
                    j++;
                }
            }
            while(i<n1){
                if(cnt==n)return nums1[i];
                cnt++;
                i++;
            }
            while(j<n2){
                if(cnt==n)return nums2[j];
                j++;
                cnt++;
            }
        }
        else{
            int curr =0,prev= 0;
            int n = ((n1+n2)/2);
            int i=0,j=0,cnt=0;
            while(i<n1 && j<n2){
                if(nums1[i]<nums2[j]){
                    if(cnt==n-1)prev=nums1[i];
                    if(cnt==n)curr = nums1[i];
                    cnt++;
                    i++;
                }
                else{
                    if(cnt==n-1)prev=nums2[j];
                    if(cnt==n)curr=nums2[j];
                    cnt++;
                    j++;
                }
            }
            while(i<n1){
                if(cnt==n-1)prev=nums1[i];
                if(cnt==n)curr = nums1[i];
                i++;
                cnt++;
            }
            while(j<n2){
                if(cnt==n-1)prev=nums2[j];
                if(cnt==n)curr=nums2[j];
                j++;
                cnt++;
            } 
            return (curr+prev)/2.0;
        }
        return 0;
    }
};