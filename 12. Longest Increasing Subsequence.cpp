Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       for(int i=0;i<n;i++) dp[i]=1;

       for(int i=1;i<n;i++) {
           for(int j=0;j<=i;j++) {
               if(a[i]>a[j] && dp[j]+1>dp[i]) {
                   dp[i]=dp[j]+1;
               }
           }
       }
       return *max_element(dp,dp+n);
    }
};
