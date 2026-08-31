class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> dict;

        vector<int> resultado(2);

        for(int i = 0; i < n; i++){
            if(dict.find(target - nums[i]) != dict.end()){
                resultado[0] = dict[target - nums[i]];
                resultado[1] = i;
            }
            dict[nums[i]] = i;
        }

        return resultado;
    }
};
