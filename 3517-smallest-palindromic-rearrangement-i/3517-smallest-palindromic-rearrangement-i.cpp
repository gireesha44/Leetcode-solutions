class Solution {
public:
    bool isPalindrome(string s){
        int i=0,j=s.size()-1;
        while(i<=j && s[i]==s[j]){
            i++, j--;
        }
        return i>j;
    }

    string smallestPalindrome(string s) {
        int n = s.size();
        string temp = s;
        sort(s.begin(),s.begin()+n/2);
        sort(s.end()-n/2,s.end(),greater<char>());
        if(isPalindrome(s)) return s;
        return temp;
    }
};
