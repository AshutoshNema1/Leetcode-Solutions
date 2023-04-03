//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 1; i<=n ; i++)
        {int start;
            if (i%2== 0)
            {
                start = 0;
            }
            
            else {
                start = 1;
            }
            
            for(int j = 1; j<= i; j++)
            {
                cout<<start;
                cout<<" ";
                start = 1-start;
            }
        
            
            cout<<endl; 
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends