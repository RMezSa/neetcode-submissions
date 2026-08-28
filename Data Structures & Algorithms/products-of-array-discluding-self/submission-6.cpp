#include <cmath>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> respuesta(n);

        int zeros = 0;
        int index_cero = 0;
        long long producto = 1;


        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeros++;
                index_cero = i;    
            }else{
                respuesta[i] = producto;
                producto *= nums[i];
            }
        }

        producto = 1;

        for(int i = n-1; i >= 0; i--){
            if(nums[i] != 0){
                respuesta[i] *= producto;
                producto *= nums[i];
            }
        }
        
        if(zeros > 1){
            vector<int> veczeros(n);
            return veczeros;
        }else if (zeros == 1){
            vector<int> veczeros(n);
            veczeros[index_cero] = producto;
            return veczeros;
        }
        return respuesta;
    }
};
