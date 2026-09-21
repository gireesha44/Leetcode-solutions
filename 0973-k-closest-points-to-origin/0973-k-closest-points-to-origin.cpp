class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<pair<int,int>>dis;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            dis.push_back({((x*x)+(y*y)),i});
        }
        sort(dis.begin(),dis.end());
        for(int i=0;i<k;i++){
            ans.push_back(points[dis[i].second]);
        }
        return ans;
    }
};