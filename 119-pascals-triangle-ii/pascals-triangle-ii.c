/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int *arr=malloc((rowIndex+1)*sizeof(int));
    long long num=1;
    for(int i=0;i<=rowIndex;i++)
    {   
      
            arr[i]=num;
            num=num*(rowIndex-i)/(i+1);
        
    }
    *returnSize=rowIndex+1;
    return arr;
    
}