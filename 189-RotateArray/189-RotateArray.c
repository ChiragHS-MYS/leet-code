// Last updated: 19/2/2026, 9:14:08 am
void rotate(int* nums, int numsSize, int k) {
    int c=0;
    int *new;
    new=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        while(k>numsSize){
            k=k-numsSize;
        }
        if(i+k>numsSize-1){
            *(new+c)=*(nums+i);
            c++;
        }
        else
        *(new+k+i)=*(nums+i);
    }
    for(int i=0;i<numsSize;i++){
    *(nums+i)=*(new+i);
    }
    return;
}