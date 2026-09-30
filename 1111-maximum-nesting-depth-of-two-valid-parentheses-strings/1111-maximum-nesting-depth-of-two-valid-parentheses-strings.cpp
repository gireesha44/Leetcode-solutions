class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq){
        int n = seq.size();
        vector<int>ans;
        int open = 0;
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
                ans.push_back(open%2);
                open++;
            }
            else if(seq[i]==')'){
                open--;
                ans.push_back(open%2);
            }
        }
        return ans;
    }
};