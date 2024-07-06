1456. Maximum Number of Vowels in a Substring of Given Length

class Solution {
public:
    bool isvowel(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    }
    int maxVowels(string s, int k) {
        int i=0, j=0, count=0, maxc=INT_MIN;
        while(j<s.length()){
            if(isvowel(s[j])){
                count++;
            }
            if(j-i+1 == k){
                maxc=max(maxc, count);
                //shrink
                if(isvowel(s[i])){
                    count--;
                }
                i++;
            }
            j++;
        }
        return maxc;
    }
};
