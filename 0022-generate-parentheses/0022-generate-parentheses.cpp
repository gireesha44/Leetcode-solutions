class Solution {
public:
    void gen(int oc,int cc,string s,vector<string>&ans,int n){
        if(oc+cc==n){
            ans.push_back(s);
            return ;
        }
        if(oc<n/2){
            gen(oc+1,cc,s+'(',ans,n);
        }
        if(oc>cc){
            gen(oc,cc+1,s+')',ans,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "";
        gen(0,0,s,ans,2*n);
        return ans;
    }
};