class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {   // 1. Base condition
            return false;   // Ugly numbers must be positive
        }

        while (n % 2 == 0) {  // 2. Divide out all factors of 2
            n = n / 2;
        }

        while (n % 3 == 0) {  // 3. Divide out all factors of 3
            n = n / 3;
        }

        while (n % 5 == 0) {  // 4. Divide out all factors of 5
            n = n / 5;
        }

        // 5. If after removing 2,3,5 factors only 1 remains → ugly number
        if (n == 1) {
            return true;
        }
        return false; // otherwise, some other prime factor remains
    }
};