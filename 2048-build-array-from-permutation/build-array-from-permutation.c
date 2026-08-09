/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {

    int *arr=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int j=0;
    int z=0;
    for(int i=0;i<numsSize;i++)
    {
        j=nums[i];
        arr[z++]=nums[j];
    }
    return arr;
}