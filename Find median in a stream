class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int>maxHeap;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        
        int n = arr.size();
        //we first put element in maxHeap then minHeap
        vector<double>res;
        double ans;
        for(int i=0; i<n; i++){
            if(maxHeap.size() == minHeap.size()){
                if(maxHeap.empty() || arr[i]<=maxHeap.top()){
                   maxHeap.push(arr[i]);
                   ans = maxHeap.top();
                }
                else{
                    minHeap.push(arr[i]);
                    ans = minHeap.top();
                }
            }
            else if(maxHeap.size()>minHeap.size()){
                maxHeap.push(arr[i]);
                int top = maxHeap.top();
                maxHeap.pop();
                minHeap.push(top);
                ans = (minHeap.top()+maxHeap.top())/2.0;
            }
            else{
                minHeap.push(arr[i]);
                int top = minHeap.top();
                minHeap.pop();
                maxHeap.push(top);
                ans = (minHeap.top()+maxHeap.top())/2.0;
            }
            res.push_back(ans);
        }
        return res;
    }
};
