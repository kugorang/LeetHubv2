class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2) ? (n << 1) : n;
    }
};