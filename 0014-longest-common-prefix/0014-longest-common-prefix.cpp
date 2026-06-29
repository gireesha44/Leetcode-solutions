class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string main = strs[0];
        int mini = INT_MAX;
        for(int j=1;j<n;j++){
            string temp = strs[j];
            int x = 0;
            int i=0;
            while(i<min({temp.size(),main.size()}) && temp[i]==main[i]){
                x++;
                i++;
            }
            mini = min(x,mini);
        }
        return main.substr(0,mini);
    }
};