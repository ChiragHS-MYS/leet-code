// Last updated: 19/2/2026, 9:13:51 am
void moveZeroes(int* nums, int numsSize) {
    int i=0,j=0;
   
   for(;i<numsSize;i++)
   {
    if(nums[i]!=0)
    {nums[j++]=nums[i];
    }
   }
   for(;j<numsSize;j++)nums[j]=0;
}