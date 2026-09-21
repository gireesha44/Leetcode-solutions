class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            pq.push({((x*x)+(y*y)),i});
            if(pq.size()>k){
                pq.pop();
            }    
        }
        while(!pq.empty()){
            int x = pq.top().second;
            ans.push_back(points[x]);
            pq.pop();
        }
        return ans;
    }
};