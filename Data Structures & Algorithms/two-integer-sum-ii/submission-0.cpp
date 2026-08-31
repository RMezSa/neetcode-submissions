class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;

        int suma = 0;

        while(left  < right){
            suma = numbers[left] + numbers[right];

            if (suma == target){
                return {left + 1, right + 1};
            }
            if(suma > target){
                right--;
            }else if(suma < target){
                left++;
            }
        }

        return {0, 0};

    }
};
