class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1; i<n; i++){
            int x = arr[i], j;
            for(j=i-1; j>=0; j--){
                if(arr[j] > x) arr[j+1] = arr[j];
                else break;
            }
            arr[j+1] = x;
        }
    }
};