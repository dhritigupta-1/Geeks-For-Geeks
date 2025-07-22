class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<int,int> map;
        int sum=0, count=0;
        map[0] = 1;
        for(int i=0; i<arr.size(); i++)
        {
            sum += arr[i];
            if(map.find(sum) != map.end())
                count+= map[sum];
            map[sum]++;
        }
        return count;
    }
};