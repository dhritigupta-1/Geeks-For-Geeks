class Solution {
  public:
    bool Func(vector<int>& arr, int k, int mid){
        int pages = 0;
        int count = 1;
        for(int i=0; i<arr.size(); i++){
            if(pages+arr[i] <= mid){
                pages += arr[i];
            }
            else {
                pages = arr[i];
                count++;
            }
        }
        return count <= k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k > arr.size() || arr.empty() || k<=0) return -1;
        long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);
        long long ans = -1;
        while(low<=high){
            long long mid = low + (high-low) / 2;
            if(Func(arr, k, mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};