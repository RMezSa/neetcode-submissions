class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;

        int maxLeft = 0;
        int maxRight = 0;

        int suma = 0;

        while(l < r){

            if (height[r] >= height[l]){
                maxLeft = max(maxLeft, height[l]);
                suma += maxLeft - height[l];
                l++;

            }else{
                maxRight = max(maxRight, height[r]);
                suma += maxRight - height[r];
                r--;

            }
        }
        return suma;
    }
};
