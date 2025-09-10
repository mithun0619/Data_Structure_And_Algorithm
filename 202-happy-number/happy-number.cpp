class Solution {
public:
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            n = getNext(n);
        }
        return n == 1;
    }
};