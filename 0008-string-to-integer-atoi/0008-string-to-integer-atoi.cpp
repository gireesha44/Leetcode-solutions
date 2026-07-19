class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i=0;
        while(s[i]==' ')i++;
        bool sign = false,neg=false,overflow=false;
        long long ans = 0;
        for(int j=i;j<n;j++){
            if((s[j]=='-' || s[j]=='+') && !sign){
                if(ans==0){
                    sign= true;
                    if(s[j]=='-')neg = true;
                }    
                else break;
            }
            else if(s[j]>='0' && s[j]<='9'){
                sign = true;
                if(ans*10+(s[j]-'0')<=INT_MAX)ans = (ans*10)+(s[j]-'0');
                else{
                    overflow=true;
                    break;
                } 
            }
            else break;
        }
        if(sign && neg){
            if(overflow)ans = INT_MIN;
            else ans=-ans;
        }
        else {
            if(overflow)ans= INT_MAX;
        }
        return ans;
    }
};