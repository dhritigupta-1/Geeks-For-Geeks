class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int, int>> res;
        for(int i=0; i<start.size(); i++)
            res.push_back({finish[i], start[i]});
        sort(res.begin(), res.end());
        int time = res[0].first;
        int count = 1;
        for(int i=1; i<start.size(); i++){
            if(res[i].second > time){
                count++;
                time = res[i].first;
            }
        }
        return count;
    }
};