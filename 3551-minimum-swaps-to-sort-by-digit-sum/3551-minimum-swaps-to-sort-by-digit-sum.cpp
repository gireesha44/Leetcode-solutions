
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> arr(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            int x = nums[i];
            sum = 0;
            while(x > 0) {
                sum += (x % 10);
                x /= 10;
            }
            nums[i] = sum;
        }
        vector<pair<int,int>> temp;
        for(int i = 0; i < n; i++) {
            temp.push_back({nums[i], arr[i]});
        }
        sort(temp.begin(), temp.end());
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            mp[temp[i].second] = i;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            while(arr[i] != temp[i].second) {
                int j = mp[arr[i]];
                swap(arr[i], arr[j]);
                cnt++;
            }
        }

        return cnt;
    }
};
