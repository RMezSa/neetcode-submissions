class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setsito;
        int n = nums.size();
        int contador = 1; 
        int max_contador = 0;  

        if (nums.size() == 0){
            return 0;
        }

        for(int i = 0; i < n; i++){
            setsito.insert(nums[i]);
        }

        int aux = 0;
        for(int num : setsito){
            if(setsito.find(num - 1) == setsito.end()){
                aux++;
                //cout << "num " << num << "\n";
                //cout << "aux " << aux << "\n";
                //cout << "inicio" << "\n";
                while(setsito.find(num + aux) != setsito.end()){
                    //cout << "Entra" << "\n";
                    //cout << num + aux << "\n";
                    contador++;
                    aux++;
                }
                aux = 0;
                max_contador = max(max_contador, contador);
                contador = 1;
                
            }else{
                aux = 0;
                max_contador = max(max_contador, contador);
                contador = 1;
            }
        }
        max_contador = max(max_contador, contador);


        return max_contador;
    }
};
