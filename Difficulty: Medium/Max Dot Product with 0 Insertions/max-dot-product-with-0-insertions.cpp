class Solution {
  public:
    
    int maxDotProduct(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<int>dp(m+1,0);
        
        for(int i=n-1;i>=0;i--){
            int next = 0;
            for(int j=m-1;j>=0;j--){
               
               int temp2 = dp[j];
               int temp = 0;
               
               if(n-i!=m-j) temp = dp[j];
               dp[j] = max(temp,(a[i]*b[j]) + next); 
               next = temp2;
            }
        }
        
        return dp[0];
    }
};