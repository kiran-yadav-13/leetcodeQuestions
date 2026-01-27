class Solution {
public:

    void reverse(vector<vector<int>>& matrix, int row){
      int left=0;
      int right=matrix.size()-1;
      while(left<right){
        int temp=matrix[row][left];
        matrix[row][left]=matrix[row][right];
        matrix[row][right]=temp;
        left++;
        right--;
      }
    }
    void rotate(vector<vector<int>>& matrix) {
        int temp=0;
        //first doing the transpose of the upper half matrix -> arr[i][j]->arr[j][i]
        //the last row/col element and the the diagonal elements will not get swapped
        for(int i=0; i<matrix.size()-1; i++){
            for(int j=i+1; j<matrix[0].size(); j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

        for(int i=0; i<matrix.size(); i++ ){
            reverse(matrix, i);
        }
    }
};
