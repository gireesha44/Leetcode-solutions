class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int i=0,j=0,maxi=0;
        vector<int>count(26,0);
        while(j<n){
            count[s[j]-'a']++;
            while(i<n && count[s[j]-'a']>2){
                count[s[i]-'a']--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};