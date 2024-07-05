76. Minimum Window Substring

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char &ch:t){
            mp[ch]++;
        }
        int rc=t.size();
        int i=0,j=0, minl=INT_MAX, minstart=i;
        while(j<s.length()){
            if(mp[s[j]] > 0){
                rc--;
            }
            mp[s[j]]--;
            //shrink
            while(rc==0){
                if(minl>j-i+1){
                    minl=j-i+1;
                    minstart=i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0){
                    rc++;
                }
                i++;
            }
            j++;
        }
        return minl==INT_MAX?"":s.substr(minstart, minl);
    }
};
