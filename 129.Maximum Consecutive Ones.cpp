//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int t) {
        // Code here
        int i=0,j=0;
        int len=INT_MIN;
        while(i<n) {
            if(nums[i]==0) {
                t--;
            }
            if(t<0) {
                while(t<0) {
                    if(nums[j]==0) {
                        t++;
                    }
                    j++;
                }
            }

            len=max(len,i-j+1);
            i++;
        }
        return len;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
