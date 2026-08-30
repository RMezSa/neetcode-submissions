class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setsito;
        int n = nums.size();
        int contador = 1; 

        if (nums.size() == 0){
            return 0;
        }
        vector<int> vec_aux(n);
        for(int i = 0; i < n; i++){
            setsito.insert(nums[i]);
        }
        int aux = 0; 
        int target_der = nums[0];
        int target_izq = nums[0];
        bool encontro_alguno = false;
        int compuerta = 0;
        int max_contador = 1;
        while(aux < n and setsito.size() > 0){
            if(setsito.find(target_der + 1) != setsito.end()){
                setsito.erase(target_der);
                target_der = target_der + 1;
                contador++;
                compuerta++;
                max_contador = max(max_contador, contador);
            }
            if(setsito.find(target_izq - 1) != setsito.end()){
                setsito.erase(target_izq);
                target_izq = target_izq - 1;
                contador++;
                compuerta++;
                max_contador = max(max_contador, contador);
            }

            if(compuerta == 0){
                encontro_alguno = false;
            }else{
                encontro_alguno = true;
            }
            compuerta = 0;
            
            if(encontro_alguno == false){
                if((aux + 1) < n){
                    target_der = nums[aux+1];
                    target_izq = nums[aux+1];
                }
                contador = 1;
            }
            aux ++;
        }
        
        max_contador = max(max_contador, contador);
        return max_contador;
    }
};
