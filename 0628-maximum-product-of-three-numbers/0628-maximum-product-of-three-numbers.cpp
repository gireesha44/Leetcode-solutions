class Solution { 
public: 
    int maximumProduct(vector<int>& nums) { 
        int n = nums.size(); 
        
        long long first_max = LLONG_MIN; 
        long long second_max = LLONG_MIN; 
        long long third_max = LLONG_MIN; 
        long long first_min = LLONG_MAX; 
        long long second_min = LLONG_MAX; 
        
        int f_max_idx = -1, s_max_idx = -1, t_max_idx = -1;
        int f_min_idx = -1, s_min_idx = -1;

        for(int i=0; i<n; i++){ 
            if(first_max < nums[i]) {
                first_max = nums[i]; 
                f_max_idx = i;
            }
        } 
        
        for(int i=0; i<n; i++){ 
            if(i != f_max_idx && second_max < nums[i]) {
                second_max = nums[i]; 
                s_max_idx = i;
            }
        } 
    
        for(int i=0; i<n; i++){ 
            if(i != f_max_idx && i != s_max_idx && third_max < nums[i]) {
                third_max = nums[i]; 
            }
        } 
        
        for(int i=0; i<n; i++){ 
            if(first_min > nums[i]) {
                first_min = nums[i]; 
                f_min_idx = i;
            }
        } 
        for(int i=0; i<n; i++){ 
            if(i != f_min_idx && second_min > nums[i]) {
                second_min = nums[i]; 
            }
        } 
        return max({1LL * first_max * second_max * third_max, 1LL * first_min * second_min * first_max}); 
    } 
};
