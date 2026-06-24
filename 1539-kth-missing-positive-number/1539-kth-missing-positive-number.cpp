class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    //    priority_queue<int, vector<int>, greater<int>> pq;
    //    unordered_set<int>st(arr.begin(),arr.end());
    //    int maxi=*max_element(arr.begin(),arr.end());
    //    for(int i=1;i<=maxi+k;i++){
    //     if(st.find(i)==st.end()){
    //         pq.push(i);
    //     }
    //    }
    //    for(int i=1;i<k;i++){
    //     pq.pop();
    //    }
    //    return pq.top();


    // o(logN)
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid] - (mid + 1) >= k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low+k;
    
    }
};