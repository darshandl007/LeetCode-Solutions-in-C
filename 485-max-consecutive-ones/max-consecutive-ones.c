int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int res1=0;
    int res2=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] == 1){
            res1++;
        }else{
            res1=0;
        }

        if(res1>res2){
            res2=res1;
        }
    }
    return res2;
    
}