class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> perfect;
        perfect.push_back(meetings[0]);
        for(int i=1;i<meetings.size();i++){
            if(perfect.back()[1]<meetings[i][0]){
                perfect.push_back(meetings[i]);
            }
            else{
                perfect.back()[1]=max(meetings[i][1],perfect.back()[1]);
            }
        }
        int count=0;
        count+=perfect[0][0]-1;
        for(int i=0;i<perfect.size()-1;i++){
            count+=perfect[i+1][0]-perfect[i][1]-1;
        }
        count+=days-perfect[perfect.size()-1][1];
        return count;
    }
};