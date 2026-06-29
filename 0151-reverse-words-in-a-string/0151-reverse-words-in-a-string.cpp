class Solution {
public:
    string reverseWords(string s) {
    
        while(s[0]==' ')s.erase(0,1);
        while(s[s.size()-1]==' ')s.erase(s.size()-1,1);
        reverse(s.begin(),s.end());
        int n = s.size();
        int i = 0,start=0,end= 0;
        while(i<n){
            start = i;
            while(i<n && s[i]!=' '){
                end = i;
                i++;
            }
            reverse(s.begin()+start,s.begin()+end+1);
            while(i<n-2 && s[i]==' ' && s[i+1]==' ')i++;
            if(s[i]==' ')i++;
        }
        i=0;
        while(i<n){
            while(s[i]==' ' && s[i+1]==' '){
                s.erase(i,1);
                n--;
            }
            i++;
        }
        return s;
    }
};