class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;     //row index
        int e=col-1; //column index
        
        while(s<row && e>=0){
            int element=matrix[s][e];
            if(element==target)
                return 1;
            if(element<target)
               s++;
            if(element>target)
                e--;
            
            
        }
        return 0;
    }
};
