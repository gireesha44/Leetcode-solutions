class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        int n = s.size();
        int m = k.size();
        string ans = "";
        unordered_map<string,string>mp;
        for(int i=0;i<m;i++){
            mp[k[i][0]] = k[i][1];
        }
        int f = 0;
        string str = "";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                f = 1;
            }
            else if(s[i]==')'){
                if(mp.find(str)!=mp.end()){
                    ans+=mp[str];
                }
                else ans+='?';
                f=0;
                str = "";
            }
            else if(f){
                str+=s[i];
            }
            else ans+=s[i];
        }
        return ans;
    }
};