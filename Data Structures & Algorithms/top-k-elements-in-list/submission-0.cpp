#include <algorithm>
#include <unordered_map>
#include <queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapa;

        for(int i : nums){
            mapa[i]++;
        }

        typedef pair<int, int> elemento;
        priority_queue<elemento, vector<elemento>, greater<elemento>> minHeap;

        for(auto const& par : mapa){
            minHeap.push({par.second, par.first});
            if(minHeap.size() > k){
                minHeap.pop();

            }
        }

        vector<int> resultado;

        while(!minHeap.empty()){
            resultado.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return resultado;
    }
};
