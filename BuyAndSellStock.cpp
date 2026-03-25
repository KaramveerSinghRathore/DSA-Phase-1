#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0,profit=0, diff=0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<prices[buy]){
                buy=i;
                continue;
            }
            diff = prices[i] - prices[buy];
            if(diff>profit){
                profit=diff;
            }
        }
        return profit;
    }
};
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    Solution sol;
    int result = sol.maxProfit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}   