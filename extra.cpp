# memorization dp

int countUniquePaths(vector<vector<int>>& arr, int i, int j, vector<vector<int>>& dp){

    if(i == 0 && j == 0){
        return 1;
    }

    if(i < 0 || j < 0){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    dp[i][j] = countUniquePaths(arr, i-1, j, dp) + countUniquePaths(arr, i, j-1, dp);

    return dp[i][j];
}

int main(){
    int m = 3, n = 2;

    vector<vector<int>> arr(m, vector<int>(n, 0));

    // ✅ DP created ONCE here
    vector<vector<int>> dp(m, vector<int>(n, -1));

    int i = m - 1;
    int j = n - 1;

    int ans = countUniquePaths(arr, i, j, dp);

    return 0;
}

