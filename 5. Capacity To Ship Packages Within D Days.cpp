//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool func(int arr[],int N,int D,int m) {
        int sum=0;
        int day=0;
        for(int i=0;i<N;i++) {
            sum+=arr[i];
            if(sum>m) {
                day++;
                sum=arr[i];
            }
        }
        day++;
        if(day<=D) return true;
        else return false;
    }

    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int h=0;
        for(int i=0;i<N;i++) {
            h+=arr[i];
        }
        int l=*max_element(arr,arr+N);
        int ans=0;
        while(l<=h) {
            int m=(l+h)/2;

            if(func(arr,N,D,m)) {
                ans=m;
                h=m-1;
            }else{
                l=m+1;
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
        int N,D;
        cin>>N;

        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends
