class Solution
{
public:
    int FindPivot(vector<int> &arr)
    {
        int n = arr.size();
        int start = 0, end = n - 1, ans = 0;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] >= arr[0])
                start = mid + 1;
            else
                ans = mid, end = mid - 1;
        }
        return ans;
    }

    int Count(int l, int r, int x, vector<int> &arr)
    {
        int idx = upper_bound(arr.begin() + l, arr.begin() + r + 1, x) - arr.begin();
        int cnt = idx - l;
        return cnt;
    }

    int countLessEqual(vector<int> &arr, int x)
    {
        int Pivot = FindPivot(arr);
        int ans = 0, n = arr.size();
        ans = Count(0 , Pivot - 1, x , arr) + Count(Pivot , n - 1 , x , arr);
        return ans;
    }
};
