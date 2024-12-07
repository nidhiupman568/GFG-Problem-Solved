class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(int low, int mid, int high, vector<int>& arr, int& cnt){
        int size = high-low+1;
        vector<int> temp(size, 0);
        int left = low, right = mid+1, k = 0; 
        
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp[k++] = arr[left++];
            } else {
                cnt += (mid - left + 1); // Increment count by the number of elements remaining in the left subarray
                temp[k++] = arr[right++];
            }
        }
        
        while(left <= mid){
            temp[k++] = arr[left++];
        }
        
        while(right <= high){
            temp[k++] = arr[right++];
        }
        
        // Copy the merged elements back to the original array
        for(int i = 0; i < size; i++) {
            arr[low + i] = temp[i];
        }
    }
    
    void divide(int low, int high, vector<int>& arr, int& cnt){
        if(low >= high) return;
        
        int mid = (low + high) / 2;
        divide(low, mid, arr, cnt);
        divide(mid + 1, high, arr, cnt);
        merge(low, mid, high, arr, cnt);
    }
    
    int inversionCount(vector<int>& arr) {
        // Your Code Here
        int n = arr.size();
        int cnt = 0;
        
        divide(0, n-1, arr, cnt);
        return cnt;
    }
};
