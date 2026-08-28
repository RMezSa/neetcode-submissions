#include <cmath>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> respuesta(n);

        int zeros = 0;
        int index_cero = 0;
        long long producto = 1;
    
        vector<int> productos_izquierda(n);
        vector<int> productos_derecha(n);


        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeros++;
                index_cero = i;    
            }else{
                productos_izquierda[i] = producto;
                producto *= nums[i];
            }
        }

        producto = 1;

        for(int i = n-1; i >= 0; i--){
            if(nums[i] != 0){
                productos_derecha[i] = producto;
                producto *= nums[i];
            }
        }

        if(zeros > 1){
            return respuesta;
        }else if (zeros == 1){
            respuesta[index_cero] = producto;
        }else{
            for(int i = 0; i < n; i++){
                respuesta[i] = productos_izquierda[i] * productos_derecha[i];
            }
        }
        return respuesta;
    }
};
