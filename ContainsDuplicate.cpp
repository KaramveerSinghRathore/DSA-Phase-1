#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                    return true;
                }
        } 
        return false;
        
    }
};
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,1};
    Solution sol;
    bool result = sol.containsDuplicate(nums);
    cout << "Contains duplicate: " << (result ? "Yes" : "No") << endl;
    return 0;
}