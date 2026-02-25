class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int, int>> res;
        for(int i=0; i<start.size(); i++)
            res.push_back({end[i], start[i]});
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