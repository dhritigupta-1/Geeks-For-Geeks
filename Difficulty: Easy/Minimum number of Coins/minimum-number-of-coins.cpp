class Solution {
  public:
    int findMin(int n) {
        // code here
        int a, b, c, d;
        a = n/10;
        int e = n%10;
        b = e / 5;
        int f = e % 5;
        c = f / 2;
        int g = f % 2;
        d = g / 1;
        return a+b+c+d;
    }
};