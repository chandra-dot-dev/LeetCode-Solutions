class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> colMin(n,INT_MIN);
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                colMin[i] = max(colMin[i],matrix[j][i]);
            }
        }
        vector<int> ans;
        for(int i =0;i<m;i++){
            int rowMin = INT_MAX;
            int colIndex =-1;
            for(int j=0;j<n;j++){
                if(rowMin>matrix[i][j]){
                    rowMin = matrix[i][j];
                    colIndex = j;
                }
            }
            if(rowMin == colMin[colIndex]){
                ans.push_back(rowMin);
            }
        }
        return ans;

    }
};