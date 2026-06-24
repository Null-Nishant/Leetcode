class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       priority_queue<int, vector<int>, greater<int>> pq;
       unordered_set<int>st(arr.begin(),arr.end());
       int maxi=*max_element(arr.begin(),arr.end());
       for(int i=1;i<=maxi+k;i++){
        if(st.find(i)==st.end()){
            pq.push(i);
        }
       }
       for(int i=1;i<k;i++){
        pq.pop();
       }
       return pq.top();
    }
};