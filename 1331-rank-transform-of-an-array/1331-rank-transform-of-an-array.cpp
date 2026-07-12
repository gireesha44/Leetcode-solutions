class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0)return {};
        if(n==1)return {1};
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        int cnt =1;
        mp[temp[0]]=1;
        for(int i=1;i<n;i++){
            if(temp[i]!=temp[i-1])cnt++;
            mp[temp[i]]=cnt;
        }
        for(int i=0;i<n;i++){
            arr[i] = mp[arr[i]];
        }
        return arr;

    }
};