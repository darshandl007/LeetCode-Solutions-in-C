/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int count=0;
    int *arr=malloc((numSize+10)*sizeof(int));
    int i=0;
    int carry=0,rem=0,val=0;
    numSize=numSize-1;
    while( numSize>=0 || k>0 || carry)
    {
        int digit = 0;

    if (numSize >= 0)
    digit = num[numSize];

     rem=k%10;
    val = digit + rem + carry;
       
        
        if(val>=10){
            val=val%10;
            carry=1;
        }else{
              carry=0;
        }
        arr[count++]=val;
         numSize--;
        k =k/ 10;
        
    }

    for(int i=0;i<count/2;i++){
        int temp=arr[i];
        arr[i]=arr[count-i-1];
        arr[count-i-1]=temp;
    }
    *returnSize=count;
    return arr;

}