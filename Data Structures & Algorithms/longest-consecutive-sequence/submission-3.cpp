class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int> mxhp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mxhp.push(nums[i]);
        }
        if(n == 0){
            return 0;
        }
        int contador = 1;
        int max_contador = 1;
        int aux = mxhp.top();
        for(int i = 0; i < n; i++){
            mxhp.pop();
            //cout << mxhp.top() << ": " << aux << "\n";
            //cout << abs(aux - mxhp.top()) << "\n";
            if(abs(aux - mxhp.top()) == 1){
                contador++;
            }else if(abs(aux - mxhp.top()) > 1){
                max_contador = max(max_contador, contador);
                contador = 1;
            }
            max_contador = max(max_contador, contador);
            aux = mxhp.top();
        }
        return max_contador;
    }
};
