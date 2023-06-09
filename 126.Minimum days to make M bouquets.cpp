//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int func(int M,int K,vector<int> &bloomDay,int mid) {
        int flower=0;
        int bouquet=0;
        for(int i=0;i<bloomDay.size();i++) {
            if(bloomDay[i]<=mid) {
                flower++;
                if(flower>=K) {
                    bouquet++;
                    flower=0;

                    if(bouquet>=M) return true;
                }
            } else {
                flower=0;
            }

        }
        return false;
    }

    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      long long low=*min_element(bloomDay.begin(),bloomDay.end());
      long long high=*max_element(bloomDay.begin(),bloomDay.end());
      long long ans=0;
      if(bloomDay.size()<M*K) {
          return -1;
      }
      while(low<=high) {
          long long mid=(low+high)/2;
          if(func(M,K,bloomDay,mid)) {
              ans=mid;
              high=mid-1;
          } else {
              low=mid+1;
          }
      }
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends
