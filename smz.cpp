class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
                int m = matrix.size();//row
                int n = matrix[0].size();//collumn
        int d=99999;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                     for(int k=0;k<n;k++){//row zero
                        if(matrix[i][k]!=0){
                            matrix[i][k]=d;}
                    }
                    for(int l=0;l<m;l++){//collumn 0
                         if(matrix[l][j]!=0){
                            matrix[l][j]=d;
                         }
                         }
                   
                }
            }
        }
            for(int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                if(matrix[i][j]==d){
                    matrix[i][j]=0;}
            }
        }
        
    }
};

