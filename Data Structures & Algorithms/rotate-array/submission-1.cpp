class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(begin(nums), end(nums));
        int l = 0;
        int r = k - 1;
        int aux = 0;
        
        while(l < r){
            aux = nums[l];
            nums[l] = nums[r];
            nums[r] = aux;
            l++;
            r--;
        }

        l = k;
        r = n - 1;

        while(l < r){
            aux = nums[l];
            nums[l] = nums[r];
            nums[r] = aux;
            l++;
            r--;
        }

    }
};