class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        if(s==goal)return true;
        s=s+s;
        return s.contains(goal);
    }
};