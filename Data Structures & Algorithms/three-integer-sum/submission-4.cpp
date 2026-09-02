class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> resultado;
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n-2; i++){
            right = n - 1;
            left = i+1;
            
            if (nums[i] > 0){
                break;
            }

            if (i > 0 and nums[i-1 ] == nums[i]){
                continue;
            }

            while(left < right){
                if( nums[left] + nums[right] == -nums[i]){
                    resultado.push_back({nums[left], nums[right], nums[i]});
                    left++;
                    right--;
                    while(left < right and nums[left] == nums[left - 1]){
                        left++;
                    }
                    while(left < right and nums[right] == nums[right+1]){
                        right--;
                    }
                }
                else if (nums[left] + nums[right] > -nums[i]){
                    right--;
                }else{
                    left++;
                }

            }
        }   
        return resultado;
    }
};
