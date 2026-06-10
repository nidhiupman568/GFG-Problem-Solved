class Solution {
  public:
    bool check(int key, vector<int>&  arr, int n) {
int l = 0, r = n - 1;
while (l <= r) {
int mid = (l + r)/2;
if (arr[mid] == key)return true;
if (arr[mid]<key)l = mid + 1;
else r = mid - 1;
}
return false;
}
int binarySearchable(vector<int>&  arr) {
   // code here
int n = arr.size(), cnt = 0;
for (int i:arr) {
if (check(i, arr, n))cnt++;
}
return cnt;
    }
};
