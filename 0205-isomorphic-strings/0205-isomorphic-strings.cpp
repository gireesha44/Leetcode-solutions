class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        int x= 0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]){
                    x=1;
                    break;
                }    
            }
            else mp[s[i]] = t[i];
        } 
        mp.clear(); 
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])!=mp.end()){
                if(mp[t[i]]!=s[i]){
                    x=1;
                    break;
                }    
            }
            else mp[t[i]] = s[i];
        }   
        return x!=1; 
    }
};