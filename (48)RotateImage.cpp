class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        
       
        for(int row = 0; row < n; ++row){
            for(int column = row; column < n; ++column){
                swap(matrix[row][column], matrix[column][row]);
            }
        }
        
       
        for(int row = 0; row < n; ++row){
            reverse(matrix[row].begin(), matrix[row].end());
        }
        
    }

};
