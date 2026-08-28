#include <sstream>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dict;

        int n = strs.size();
        for(int i = 0; i < n; i++){
            vector<int> abc(26);
            for(auto const & letra : strs[i]){
                abc[static_cast<int>(letra) - 97]++;
            }
            string vec2str;
            stringstream ss;
            for(int k = 0; k < 26; k++){
                ss << abc[k];
                ss << "#";
            }

            vec2str = ss.str();
            dict[vec2str].push_back(strs[i]);
        }

        vector<vector<string>> resultado(dict.size());
        int idx_dict = 0;
        for(const auto & [key, words] : dict){
            for(int i = 0; i < words.size(); i++){
                resultado[idx_dict].push_back(words[i]);
            }
            idx_dict++;
        }

        return resultado;

    }
};
