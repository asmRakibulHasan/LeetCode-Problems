class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
	// Write your code here.
	int firstCol = -1;
    int n = matrix.size();
    int m = matrix[0].size();

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!matrix[i][j]){
				if(j==0){
					firstCol = 0;
				}
				else{
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
			}
		}
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][j]){
				if(!matrix[0][j] || !matrix[i][0]){
					matrix[i][j] = 0;
				}
			}
		}
	}

	if(!matrix[0][0]){
		for(int i=0;i<m;i++) matrix[0][i] = 0;
	}

	if(firstCol == 0){
		for(int i=0;i<n;i++) matrix[i][0] = 0;
	}

}
};