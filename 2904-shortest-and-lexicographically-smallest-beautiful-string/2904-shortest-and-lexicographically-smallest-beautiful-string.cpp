class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        vector<string>ans;
        int i=0,j=0,cnt=0;
        while(j<n){
            if(s[j]=='1')cnt++;
            while(i<n && cnt>k){
                if(s[i]=='1')cnt--;
                i++;
            }
            while(i<n && cnt==k && s[i]=='0'){
                ans.push_back(s.substr(i,j-i+1));
                i++;
            }
            if(cnt==k)ans.push_back(s.substr(i,j-i+1));
            j++;
        }
        if(ans.empty())return "";
        sort(ans.begin(),ans.end());
        vector<int>lens;
        for(int i=0;i<ans.size();i++){
            lens.push_back(ans[i].size());
        }
        int mini = *min_element(lens.begin(),lens.end());
        for(int i=0;i<lens.size();i++){
            if(lens[i]==mini)return ans[i];
        }
        return "";
    }
};