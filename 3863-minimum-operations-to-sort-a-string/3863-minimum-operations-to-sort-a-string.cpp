class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(is_sorted(s.begin(),s.end()))return 0;
        if(n==2)return -1;
        char mini=*min_element(s.begin(),s.end());
        char maxi=*max_element(s.begin(),s.end());
        if(s[0]==mini || s[n-1]==maxi)return 1;
        if(s.find(mini)==n-1 && s.rfind(maxi)==0)return 3;
        return 2;
    }
};