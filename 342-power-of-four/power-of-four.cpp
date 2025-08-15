class Solution {
public:
    bool isPowerOfFour(int n) {
        // n must be positive
        if (n <= 0) return false;
        
       // check if it's power of two
        if ((n & (n - 1)) != 0) return false;
        
        // check if the set bit is in an even position
        return (n & 0x55555555) != 0;
    }
};
