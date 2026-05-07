class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=0;
        int m=1;
        int max=0;
        while(m<prices.size()){
            if (prices[n]<prices[m]){
                int sum=prices[m]-prices[n];
                if (sum>max){
                    max=sum;
                }
            }
            else if (prices[n]>prices[m]){
                n=m;
            }
            m++;
        }
        if (max!=0){
            return max;
        }
        return 0;
    }
};
