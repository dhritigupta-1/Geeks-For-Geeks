class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low < high){
            int part = partition(arr, low, high);
            quickSort(arr, low, part-1);
            quickSort(arr, part+1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot = arr[high];
        int i = low - 1;
        for(int j=low; j<=high-1; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[high]);
        return i+1;
    }
};