//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
void reverseArray(int*arr , int low , int high)
{
    while(low < high)
    {
        swap(arr[low++],arr[high--]);
    }
}

void leftRotate(int arr[], int n, int d) 
{
        reverseArray(arr , 0 , d-1);
        reverseArray(arr , d , n-1);
        reverseArray(arr , 0 , n-1);
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends