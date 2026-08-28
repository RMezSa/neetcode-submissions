class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> respuesta(n);

        int zeros = 0;
        int index_cero = 0;
        int producto = 1;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeros++;
                index_cero = i;    
            }else{
                producto *= nums[i];
            }

        }

        if(zeros > 1){
            return respuesta;
        }else if (zeros == 1){
            respuesta[index_cero] = producto;
        }else{
            for(int i = 0; i < n; i++){
                respuesta[i] = producto/nums[i];
            }
        }
        return respuesta;
    }
};
