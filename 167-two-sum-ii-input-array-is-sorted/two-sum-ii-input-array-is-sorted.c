/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *arr=malloc(2*sizeof(int));

    int start=0;
    int end=numbersSize-1;

    int sum=0;
    while(start < end){
        sum=numbers[start] + numbers[end];
        if(sum== target){
            *returnSize=2;
            arr[0]=start+1;
            arr[1]=end+1;
            return arr;
        }
        if(sum > target){
            end--;
        }else{
            start++;
        }

    }
    *returnSize=0;
    free(arr);
    return NULL;
}