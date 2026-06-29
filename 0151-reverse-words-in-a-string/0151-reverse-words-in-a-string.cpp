class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0,j=n-1;
        string ans = "";
        while(s[i]==' ')i++;
        while(s[j]==' ')j--;
        string str="";
        while(i<=j){
            if(s[j]==' '){
                while(s[j]==' ')j--;
                reverse(str.begin(),str.end());
                ans+=str+' ';
                str="";
            }
            str+=s[j];
            j--;
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};