class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans="";
        int cnt =0,start=0,end=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                if(i!=0 && end-start>1){
                    for(int i=start+1;i<end;i++){
                        ans+=s[i];
                    }
                }
                start = i;
            }
            if(s[i]=='(')cnt++;
            else{
                cnt--;
                end = i;
            }
        }
        for(int i=start+1;i<end;i++){
            ans+=s[i];
        }
        return ans;
    }
};