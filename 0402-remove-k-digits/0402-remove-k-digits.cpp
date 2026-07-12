class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char>st;
        int cnt = 0;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>num[i] && cnt<k){
                st.pop();
                cnt++;
            }    
            st.push(num[i]);
        }
        while(cnt<k){
            st.pop();
            cnt++;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        string res="";
        int i=0;
        while(i<ans.size() && ans[i]=='0')i++;
        for(int j=i;j<ans.size();j++)res+=ans[j];
        return res==""?"0":res; 
    }
};