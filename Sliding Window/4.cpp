First negative in every window of size k
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.
https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
          //queue
          list<ll>q;
          int i=0,j=0;
          vector<ll> ans;
          while(j<N){
              if(A[j]<0){
                  q.push_back(A[j]);
              }
              if(j-i+1==K){
                  if(!q.empty()){
                    ans.push_back(q.front()); //dont pop now
                  }
                  else{
                      ans.push_back(0);
                  }
                  if(A[i]<0 && !q.empty()){
                      q.pop_front();
                  }
                  i++;
              }
              j++;
          }
          return ans;
 }
