438. Find All Anagrams in a String
class Solution {
public:
    bool allzero(vector<int>&arr){
        return arr==vector<int>(26,0);
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>arr(26);
        for(char &c:p){
            arr[c-'a']++;
        }
        int i=0,j=0;
        vector<int>ans;
        while(j<s.length()){
            arr[s[j]-'a']--; //all decrease to 0
            if(j-i+1==p.length()){
                if(allzero(arr)){
                    ans.push_back(i);
                }
                //shrink
                arr[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};
