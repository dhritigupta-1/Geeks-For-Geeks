// User function Template for Java

class Solution {
    int recursion(int arr[], int n)
    {
        if(n <= 0)
            return 0;
        return arr[n - 1] + recursion(arr,n - 1);
    }
    int arraySum(int arr[]) {
        // code here
        int n = arr.length;
        int sum = recursion(arr, n);
        return sum;
    }
}
