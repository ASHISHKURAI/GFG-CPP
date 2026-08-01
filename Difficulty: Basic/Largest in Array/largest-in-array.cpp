class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n= arr.size();
        int max = arr[0];     // assuming the first element is the max element 
        
        for (int i=0; i<n; i++){  // travesing the array 
            
            if (arr[i]> max){  // condition
                
                max=arr[i];    // max value storing 
            }
        }
        return max;
    }
};
