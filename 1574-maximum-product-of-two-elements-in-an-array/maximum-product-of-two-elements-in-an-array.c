int maxProduct(int* nums, int numsSize) {
    int max=INT_MIN;
    int sec=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]>max){
            sec=max;
            max=nums[i];
        }else if(nums[i] > sec){
            sec=nums[i];
        }
    }
    int mu=(max-1)*(sec-1);
    return mu;
}