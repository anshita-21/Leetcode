1493. Longest Subarray of 1's After Deleting One Element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int last_zero_seen=-1;
        int i=0,j=0, res=0;
        while(j<nums.size()){
            if(nums[j]==0){
                i=last_zero_seen+1;
                last_zero_seen=j;
            }
            res=max(res,j-i);
            j++;
        }
        return res;

    }
};
