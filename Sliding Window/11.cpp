2024. Maximize the Confusion of an Exam

class Solution {
public:
    int maxConsecutiveAnswers(string str, int k) {
    //1 pass sw
    int res=0, j=0, i=0;
    unordered_map<char, int> mp;
    while(j< str.length()){
        mp[str[j]]++;
        while(min(mp['T'], mp['F']) > k){
            mp[str[i]]--;
            i++;
        }
        res=max(res, j-i+1);
        j++; //after res
    }
    return res;
    }
};
