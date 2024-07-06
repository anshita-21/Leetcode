2444. Count Subarrays With Fixed Bounds

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minindex=-1, maxindex=-1, culprit=-1;
        long long ans=0;
        for(int i=0, j=0;i<nums.size();i++){
            if(nums[i]==minK){
                minindex=i;
            }
            if(nums[i]==maxK){
                maxindex=i;
            }
            if(nums[i]>maxK || nums[i]<minK){
                culprit=i;
            }
            int smallest=min(minindex, maxindex);
            int temp=smallest-culprit;
            ans+=temp<=0?0:temp;
        }
        return ans;
    }
};
