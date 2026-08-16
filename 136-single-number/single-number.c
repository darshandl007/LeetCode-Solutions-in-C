int singleNumber(int* nums, int numsSize) {
    int flag=0;
    int out=0;
    
        for(int i=0;i<numsSize;i++)
        {  flag=1;
            for(int j=0;j<numsSize;j++)
            {  
                
                if(i != j && nums[i] == nums[j])
                {  
                     flag=0;
                    break;
                }
            }
            if(flag == 1){
                out=nums[i];
                 return out;
            }
        }
    
    
    return out;
    
}