class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int n = arr.size();
        int bal5=0,bal10=0;
        for(int i=0;i<n;i++){
            if(arr[i]==5)bal5+=5;
            else if(arr[i]==10){
                if(bal5<5)return false;
                bal10+=10;
                bal5-=5;
            }
            else if(arr[i]==20){
                if(bal5>=5 && bal10>=10){
                    bal5-=5;
                    bal10-=10;
                }    
                else if(bal5>=15){
                    bal5-=15;
                }
                else{
                    return false;
                }
            }   
        }
        return true;
    }
};