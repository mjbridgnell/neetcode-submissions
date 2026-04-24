class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < board.size(); i++)
        {  
            map<char, int> row;
            map<char, int> col;
            for (int j = 0; j < board.size(); j++)
            {
                char row_char = board[i][j];
                char col_char = board[j][i];
                if (row_char != '.')
                {
                    row[row_char]++;
                    if (row[row_char] > 1)
                    {
                        return false;
                    }
                }
                if (col_char != '.')
                {
                    col[col_char]++;
                    if (col[col_char] > 1)
                    {
                        return false;
                    }
                }
            }
        }

        map<int, map<char, int>> squares;

        for (int i = 0; i < board.size(); i++)
        {  
            for (int j = 0; j < board.size(); j++)
            {
                int square_index = (i / 3) * 3 + (j / 3);
                char cur_char = board[i][j];
                if (cur_char != '.')
                {
                    squares[square_index][cur_char]++;
                    if (squares[square_index][cur_char] > 1)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
