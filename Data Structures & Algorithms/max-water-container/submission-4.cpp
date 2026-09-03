class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        cout << n << "\n";

        int left = 0; 
        int right = n-1;

        int max_stored = 0;
        int stored = 0;

        while(left < right){
            stored = min(heights[left], heights[right])*(right-left);

            if(heights[left] > heights[right]){
                right--;
            }else if(heights[right] > heights[left]){
                left++;
            }else if(heights[right] == heights[left]){
                right--;
            }
            max_stored = max(max_stored, stored);
        }

        return max_stored;

    }
};
