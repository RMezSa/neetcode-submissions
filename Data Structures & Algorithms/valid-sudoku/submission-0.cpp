class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> filas(n, vector<int> (9));
        vector<vector<int>> columnas(m, vector<int> (9));
        vector<vector<int>> boxes(n, vector<int> (9));
        

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                //cout << board[i][j] << "\n";
                if(board[i][j] != '.'){
                    if(filas[i][(board[i][j] - '0') - 1] > 0){
                        return false;
                    }else if(columnas[j][(board[i][j] - '0') - 1] > 0){
                        return false;
                    }else{
                        filas[i][(board[i][j] - '0') - 1] = 1;
                        columnas[j][(board[i][j] - '0')  - 1 ] = 1;
                    }

                    if( boxes[(i/3)*3 + j/3][(board[i][j] - '0') - 1] != 0 ){
                        return false;
                    }
                    boxes[(i/3)*3 + j/3][(board[i][j] - '0') - 1] = 1;

                }
            }
        }
        return true;
    }
};
