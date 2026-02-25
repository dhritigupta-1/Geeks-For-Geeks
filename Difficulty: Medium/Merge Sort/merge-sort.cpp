class Solution {
  public:
    void merge(vector<int>& arr, int l, int r, int mid){
        vector<int> ans;
        int i=l, j=mid+1, k=0;
        while(i<=mid && j<=r){
            if(arr[i] <= arr[j]) ans.push_back(arr[i++]);
            else ans.push_back(arr[j++]);
        }
        while(i<=mid) ans.push_back(arr[i++]);
        while(j<=r) ans.push_back(arr[j++]);
        for(int k=0; k<ans.size(); k++)
            arr[l+k] = ans[k];
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l >= r) return;
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r, mid);
    }
};