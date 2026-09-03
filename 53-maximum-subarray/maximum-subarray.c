int maxSubArray(int* nums, int numsSize) {
   int  sum=0;
    int maximum_sum=INT_MIN;
    
    for(int i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
     if(sum > maximum_sum)
        {
            maximum_sum=sum;
        }
        
           if(sum<0)
        {
            sum=0;
             
        }
    }
    return maximum_sum;
}