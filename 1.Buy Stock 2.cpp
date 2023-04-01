You are given the prices of stock for n number of days. every ith day tell the price of the stock on that day.find the maximum profit that you can make by buying and selling stock any number of times as you can't proceed with other transactions if you hold any transaction.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        long long prof=0;
        long long s=0;
        int buy=1;

        for(int i=0;i<n-1;i++) {
            if(buy) {
                if(prices[i]<prices[i+1]) {
                    s=prices[i];
                    buy=0;
                }
            }else {
                if(prices[i]>prices[i+1]) {
                    prof+=prices[i]-s;
                    buy=1;
                }
            }
        }
        if(!buy) {
            prof+=(prices[n-1]-s);
        }
        return prof;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;

        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }

        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
