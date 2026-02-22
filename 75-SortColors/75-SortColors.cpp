// Last updated: 22/2/2026, 10:20:18 pm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0},k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)count[0]++;
            else if(nums[i]==1)count[1]++;
            else count[2]++;
        }
        for(int i=0;i<3;i++)
        {
            while(count[i]){
                nums[k]=i;
                k+=1;
                count[i]--;

            }
        }
        
    }
};