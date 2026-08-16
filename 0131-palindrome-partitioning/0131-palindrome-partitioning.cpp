class Solution {
public:
    bool checkPalindrome(string s){
        if(s.empty())return false;
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    void generate(string str,string curr,int ind,vector<string>temp,vector<vector<string>>&ans){
        if(ind==str.size()){
            if(checkPalindrome(curr)){
                temp.push_back(curr);
                ans.push_back(temp);
            }
            return ;
        }
        if(checkPalindrome(curr)){
            temp.push_back(curr);
            generate(str,string(1,str[ind]),ind+1,temp,ans);
            temp.pop_back();
        }
        generate(str,curr+str[ind],ind+1,temp,ans);
    }
    vector<vector<string>> partition(string s) {
        if(s.empty())return {};
        vector<vector<string>>ans;
        vector<string>temp;
        generate(s,"",0,temp,ans);
        return ans;
    }
};