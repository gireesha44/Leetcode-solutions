class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        vector<string>st;
        st.push_back("");
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push_back("");
            }
            else if(s[i]==')'){
                string top_str = st.back();
                st.pop_back();
                reverse(top_str.begin(),top_str.end());
                st.back()+=top_str;
            }
            else{
                st.back().push_back(s[i]);
            }
        }
        return st.back();
    }
};