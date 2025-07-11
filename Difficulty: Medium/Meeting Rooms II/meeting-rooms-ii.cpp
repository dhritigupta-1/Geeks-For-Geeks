class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        int n = start.size();
        if(n==0){
            return 0;
        }
        
        int room = 0;
        int maxRooms = 0;
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int j=0;
        for(int i = 0;i < n;i++){
            if(start[i] < end[j]){
                room++;
            }else{
                j++;
            }
        maxRooms = max(maxRooms, room);
        }
        return maxRooms;
    }
};
