class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>matrix[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num=='.'){
                    continue;
                }
            if(row[i].count(num)){
                return false;
            }
            row[i].insert(num);
            if(col[j].count(num)){
                return false;
            }
            col[j].insert(num);
            int box=(i/3)*3+(j/3);

            if(matrix[box].count(num)){
                return false;
            }
            matrix[box].insert(num);
        }
        }
        return true;
    }
};
