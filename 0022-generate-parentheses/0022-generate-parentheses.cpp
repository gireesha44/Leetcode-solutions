class Solution {
public:
    vector<string>res;
    void generatePar(int oc,int cc,int n,string brackets){
        if(oc+cc==n){
            res.push_back(brackets);
        }
        if(oc<n/2){
            generatePar(oc+1,cc,n,brackets+'(');
        }
        if(oc>cc){
            generatePar(oc,cc+1,n,brackets+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        generatePar(0,0,2*n,"");
        return res;
    }
};