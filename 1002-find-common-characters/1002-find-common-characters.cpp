class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int>present(26,0);
        vector<int>min_freq(26,INT_MAX);
        for(char c='a';c<='z';c++){
            for(string word:words){
                int freq = 0;
                for(char ch:word){
                    if(ch==c)freq++;
                }
                if(freq>0)present[c-'a']++;

                min_freq[c-'a'] = min(min_freq[c-'a'],freq);
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            if(present[i]==n){
                for(int j=0;j<min_freq[i];j++){
                    ans.push_back(string(1,'a'+i));
                }
            }
        }
        return ans;
    }
};