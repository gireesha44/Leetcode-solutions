class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        bool neg= false;
        int f = 0,j=0;
        while(s[j]==' ')j++;
        if(s[j]=='-'){
            neg=true;
            j++;
        }    
        else if(s[j]=='+'){
            neg = false;
            j++;
        }
        int i = j;
        while(i<n && s[i]>='0' && s[i]<='9'){
            ans = ans*10+(s[i]-'0');
            if(neg && -ans<INT_MIN)return INT_MIN;
            if(!neg && ans>INT_MAX)return INT_MAX;
            
            i++;
        }
        return neg?-ans:ans;
    }
};