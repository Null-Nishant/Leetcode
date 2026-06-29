class Solution {
public:
// bool predicate(int mid,vector<int>& people, int limit){
    
// }
    int numRescueBoats(vector<int>& people, int limit) {

        // why binary search not applied
        // int low=1,high=people.size();
        // int ans=-1;
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     if(predicate(mid,people,limit)){
        //         ans=mid;
        //         high=mid-1;
        //     }
        //     else{
        //         low=mid+1;
        //     }
        // }
        // return ans;
        sort(people.begin(),people.end());
        int low=0,high=people.size()-1;
        int ans=0;
        for(int i: people){
            cout<<i<<" ";
        }
        while(low<=high){
            int sum=people[low]+people[high];
            if(sum<=limit){
                low++;
                high--;
                ans++;
            }
            else{
                ans++;
                high--;
            }
        }
        return ans;
    }
};