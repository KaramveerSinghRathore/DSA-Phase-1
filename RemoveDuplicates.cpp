#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5};
    Solution sol;
    int newLength = sol.removeDuplicates(nums);
    cout << "New length after removing duplicates: " << newLength << endl;
    cout << "Modified array: ";
    for(int i=0; i<newLength; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}