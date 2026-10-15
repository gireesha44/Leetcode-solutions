class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        int i=0;
        bool neg = false;
        if(n==0)return 0;
        while(s[i]==' ')i++;
        if(i>=n)return 0;
        if(s[i]=='-'){
            neg = true;
            i++;
        }
        else if(s[i]=='+')i++;
        for(;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
                if(!neg && ans>INT_MAX)return INT_MAX;
                if(neg && -ans<INT_MIN)return INT_MIN;
            }
            else{
                break;
            }
        }
        if(neg)return -ans;
        else return ans;
    }
};