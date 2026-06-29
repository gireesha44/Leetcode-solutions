class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int last = -1;
        for(int i=0;i<n;i++){
            if((num[i]-'0')&1){
                last = i;
            }
        }
        return num.substr(0,last+1);
        
    }
};