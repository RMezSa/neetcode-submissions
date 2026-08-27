using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        vector<string> strs_cpy = strs;
        unordered_map<string, vector<int>> dict;
        
        for(int i = 0; i < n; i++){
            sort(strs[i].begin(), strs[i].end());
            dict[strs[i]].push_back(i);
        }

        int idx_dict = 0;
        vector<vector<string>> resultado(dict.size());
        for(const auto& [words, indexes] : dict){
            for(int vect_idx = 0; vect_idx < indexes.size(); vect_idx++){
                resultado[idx_dict].push_back(strs_cpy[indexes[vect_idx]]);
            }
            idx_dict++;
        }

        return resultado;


    }
};
