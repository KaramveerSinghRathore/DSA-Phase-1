#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        for(int i=0;i<nums.size();i++){
            result = result^nums[i];
        }
        return result;
    }
};
int main(){
    vector<int> nums = {4,1,2,1,2};
    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "Single number: " << result << endl;
    return 0;
}