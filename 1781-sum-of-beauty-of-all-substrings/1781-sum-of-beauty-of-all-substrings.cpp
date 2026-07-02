class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi = 0,mini=INT_MAX;
                for(int k:freq){
                    if(k>0){
                        maxi = max(maxi,k);
                        mini = min(mini,k);
                    }
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};