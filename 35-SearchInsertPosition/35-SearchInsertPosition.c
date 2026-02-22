// Last updated: 22/2/2026, 10:20:25 pm
int searchInsert(int* nums, int numsSize, int target) {
    int n=numsSize;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
        else if(nums[i]>target){
            return i;
        }
    }
    return n;
}