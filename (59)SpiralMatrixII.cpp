class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int> (n));


        int row=n;
        int col=n;

        int count=0;
        int total=row*col;

        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        while(count<total){

            for(int index=startingCol;count<total && index<=endingCol;index++){
                ans[startingRow][index]=++count;
            
            }
            startingRow++;

            for(int index=startingRow;count<total && index<=endingRow;index++){
                ans[index][endingCol]=++count;
               
            }
            endingCol--;

            for(int index=endingCol; count<total && index>=startingCol; index--){
                ans[endingRow][index]=++count;

            }
            endingRow--;

            for(int index=endingRow; count<total && index>=startingRow; index--){
                ans[index][startingCol]=++count;
            }
            startingCol++;
        }

        return ans;
        
    }
};
