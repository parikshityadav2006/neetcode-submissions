class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> vert;
        unordered_map<char, int> hor;
        unordered_map<char, int> grid;

        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                hor[board[j][i]]++;
                vert[board[i][j]]++;
            }
            for (auto& p : hor) {
                if (p.second < 2) {
                    continue;
                } else if (p.second > 1 && p.first != '.') {
                    return false;
                }
            }
            hor.clear();
            for (auto& p : vert) {
                if (p.second < 2) {
                    continue;
                } else if (p.second > 1 && p.first != '.') {
                    return false;
                }
            }
            vert.clear();
        }

        int n = 0;
        int m = 1;
        int p = 0;
        int q = 1;
        for (int k = 0; k < 9; k++) {
            
                for (int i = 3 * n; i < 3 * m; i++) {
                    for (int j = 3 * p; j < 3 * q; j++) {
                        grid[board[i][j]]++;
                    }
                }
                for (auto& p : grid) {
                    if (p.second < 2) {
                        continue;
                    } else if (p.second > 1 && p.first != '.') {
                        return false;
                    }
                }
                grid.clear();
                p++;
                q++;
                if (q == 4) {
                    p = 0;
                    q = 1;
                    n++;
                    m++;
                }
            
            }
            return true;
        }
    };
