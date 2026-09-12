int maxAscendingSum(int* nums, int numsSize) {

    int sum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i] > nums[i-1])
        {
            sum=sum+nums[i];
        }else{
            sum=nums[i];
        }
        if(sum > maxsum)
        {
            
            maxsum=sum;
        }
    }
    return maxsum;
}