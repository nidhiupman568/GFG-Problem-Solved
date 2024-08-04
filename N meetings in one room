class Solution {
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int, int>> meetings;
        for (int i = 0; i < n; i++) {
            meetings.push_back({end[i], start[i]});
        }
        
        sort(meetings.begin(), meetings.end());
        
        int count = 0;
        int lastEnd = -1;
        
        for (const auto& meeting : meetings) {
            if (meeting.second > lastEnd) {
                count++;
                lastEnd = meeting.first;
            }
        }
        
        return count;
    }
};
