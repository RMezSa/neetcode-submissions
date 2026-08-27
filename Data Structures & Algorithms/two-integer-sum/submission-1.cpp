#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultado(2);

        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    resultado[0] = i;
                    resultado[1] = j;
                }
            }
        }

        return resultado;        

    }
};
