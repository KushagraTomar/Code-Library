//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int a=0,b=0,c=0;
        int i=0,j=0;
        int count=0;
        int n=s.length();

        while(j<n) {
            if(s[j]=='a') a++;
            else if(s[j]=='b') b++;
            else c++;

            while(a>0&&b>0&&c>0) {
                count+=n-j;
                if(s[i]=='a') a--;
                else if(s[i]=='b') b--;
                else c--;
                i++;
            }
            j++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
