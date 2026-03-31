#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t){
            return true;
        }
        return false;
    }
};
int main(){
    string s = "listen";
    string t = "silent";
    Solution sol;
    bool result = sol.isAnagram(s, t);
    cout << "Are the strings anagrams? " << (result ? "Yes" : "No") << endl;
    return 0;
}