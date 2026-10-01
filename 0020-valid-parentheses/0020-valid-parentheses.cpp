class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n==1)return false;
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(!st.empty()){
                if(st.top()=='('){
                    if(s[i]==')')st.pop();
                    else return false;
                }
                else if(st.top()=='['){
                    if(s[i]==']')st.pop();
                    else return false;
                }
                else if(st.top()=='{'){
                    if(s[i]=='}')st.pop();
                    else return false;
                }
            }
            else return false;
        }
        return st.empty();
    }
};