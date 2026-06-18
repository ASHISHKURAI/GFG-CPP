class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        // code here
        int ans=0;
        queue<pair<int,int>> q;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j]==0){
                    q.push({i, j});
                }
            }
        }
        int n= mat.size();
        int m=mat[0].size();
        while(!q.empty()){
            int row= q.front().first;
            int col= q.front().second;
            //left
            q.pop();
            int i= row;
            int j= col;
            while(j>=0){
                if(mat[i][j]==1){
                    
                    ans++;
                    break;
                }
                j--;
            }
            i= row;
            j= col;
            
            //right
            
            while(j<m){
                if(mat[i][j]==1){
                    ans++;
                    break;
                }
                j++;
            }
            i= row;
            j= col;
            
            
            
            
            // donw
            while(i<n){
                if(mat[i][j]==1){
                    ans++;
                    break;
                }
                i++;
            }
            i= row;
            j= col;
            
            
        
            //uo
        
            while(i>=0){
                if(mat[i][j]==1){
                    ans++;
                    break;
                }
                i--;
            }
        }
        return ans;
        
    }
};