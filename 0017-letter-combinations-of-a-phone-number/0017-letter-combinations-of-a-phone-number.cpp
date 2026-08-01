class Solution {
public:
    unordered_map<char,string>mp = {
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
    };
    vector<string>ans;
    void fun(string digs,string s,int ind){
        if(ind==digs.size()){
            ans.push_back(s);
            return ;
        }
        string x = mp[digs[ind]];
        for(int i=0;i<x.size();i++){
            fun(digs,s+x[i],ind+1);
        }

    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        fun(digits,"",0);
        return ans;
    }
};