// Last updated: 22/2/2026, 10:20:28 pm
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int  n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};