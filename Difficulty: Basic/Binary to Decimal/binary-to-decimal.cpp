class Solution {
public:
    int binaryToDecimal(string &b) {
        int ans = 0;

        for(char bit : b) {
            ans = ans * 2 + (bit - '0');
        }

        return ans;
    }
};