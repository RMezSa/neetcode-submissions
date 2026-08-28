class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numsfreq;
        vector<int> resultado(k);
        typedef pair<int, int> elemento;

        for(auto i : nums){
            numsfreq[i]++;
        }

        priority_queue<elemento> pq;

        for(auto const & [numero, frecuencia] : numsfreq){
            pq.emplace(frecuencia, numero);
        }

        for(int i = 0; i < k; i++){
            pair<int, int> par = pq.top();
            resultado[i] = par.second;

            pq.pop();
        }

    return resultado;
        
    }
};
