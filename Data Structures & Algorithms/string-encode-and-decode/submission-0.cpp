#include <sstream>

class Solution {
public:

    string encode(vector<string>& strs) {
        stringstream st;
        for(const auto& palabra : strs){
            cout << palabra << "\n";
            st << palabra.length() << "$" << palabra;
        }

        string ss2str = st.str();
        return ss2str;
    }

    vector<string> decode(string s) {
        vector<string> resultado;
        string aux = "";
        size_t i = 0;
        while(i < s.size()){
            size_t j = s.find("$", i);
            int longitud = stoi(s.substr(i, j-i));

            resultado.push_back(s.substr(j+1, longitud));
            i = j + longitud + 1;
        }
        return resultado;
    }
};
