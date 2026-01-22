class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if(n == 0)
           return;
        int a = d % n;
        
        reverse(arr.begin(), arr.begin()+a);
        reverse(arr.begin()+a, arr.end());
        reverse(arr.begin(), arr.end());
    }
};