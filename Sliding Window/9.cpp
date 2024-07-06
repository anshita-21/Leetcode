2090. K Radius Subarray Averages

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n,-1);

        if(n<2*k+1) return res;

        int left=0;
        int right=2*k;
        int i=k;
        long long s=0;
        for(int j=left;j<=right;j++){
            s+=nums[j];
        }
        res[i]=s/(2*k+1);
        i++;
        right++;
        while(right<n){
            s+=nums[right]-nums[left++];
            res[i]=s/(2*k+1);
            i++;
            right++;
        }
        return res;
    }
};
