//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int a[26]={0};
        int i=0,j=0;

        int c=0;
        int ans=-1;
        while(j<s.length()) {
            if(a[s[j]-'a']==0) c++;
            a[s[j]-'a']++;

            if(c==k) {
                ans=max(ans,j-i+1);
            }else if(c>k) {
                while(c>k) {
                    a[s[i]-'a']--;
                    if(a[s[i]-'a']==0) c--;
                    i++;
                }
            }
            j++;
        }
        // ans=max(ans,j-i+1);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
