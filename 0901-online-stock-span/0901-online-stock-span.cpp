class StockSpanner {
public:
    stack<pair<int,int>>st;
    int cnt = 0;
    StockSpanner() {
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price)st.pop();
        
        int ans =cnt-(st.empty()?-1:st.top().second);
        st.push({price,cnt});
        cnt++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */