class Solution {
	public:
	int maximumSum(vector<vector<int>> & mat, int k) {
		int n = mat.size();
		
		vector<vector<int>> vec(n + 1, vector<int>(n + 1, 0));
		
		int res = INT_MIN;
		
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<n; j++)
			{
				vec[i + 1][j + 1] = vec[i][j + 1] + vec[i + 1][j] - vec[i][j] + mat[i][j];
				
				if (i+1 >= k && j+1 >= k)
					res = max(res, vec[i + 1][j + 1] - vec[i + 1 - k][j + 1] - vec[i + 1][j + 1 - k] + vec[i + 1 - k][j + 1 - k]);
			}
		}
		
		return res;
	}
};
