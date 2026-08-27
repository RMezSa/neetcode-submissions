#include <unordered_map>

using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        
        int n = nums.size();
        for(int i = 0; i < n; i++){
            cout << nums[i] << "\n";
            if(dict.find(nums[i]) != dict.end() ){
                return true;
            }else{
                dict[nums[i]]++;
            }
        }
        return false;

    }
};