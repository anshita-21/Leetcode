Count Occurences of Anagrams
Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.
https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool allzero(vector<int>&arr){
        for(int &i:arr){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    vector<int>arr(26);
	    for(char &ch:pat){
	        arr[ch-'a']++;
	    }
	    int i=0,j=0,ans=0;
	    while(j<txt.length()){
	        arr[txt[j]-'a']--;
	        if(j-i+1==pat.length()){
	            if(allzero(arr)){
	                ans++;
	            }
	            arr[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
