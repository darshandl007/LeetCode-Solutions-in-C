/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    
   
    int max=INT_MIN;
    int min=INT_MAX;
    int size=0;
    for(int i=0;i< numsSize;i++)
    {
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i] < min){
            min=nums[i];
        }
    }
       int *arr = malloc((max - min + 1) * sizeof(int));
    for (int num = min; num <= max; num++)
{
    int found = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (!found)
        arr[size++] = num;
}
 
    *returnSize=size;
    return arr;

}