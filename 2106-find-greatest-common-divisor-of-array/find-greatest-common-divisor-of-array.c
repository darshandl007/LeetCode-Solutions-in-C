int findGCD(int* nums, int numsSize) {
    int i=0;
    int gcd;
int min=nums[i];
int max=nums[i];

    for( i=0;i<numsSize;i++){
        
       
        if(nums[i]>max){
            max=nums[i];
         
        }else if(nums[i]< min){
            min=nums[i];
        }
       
    
    }
    int a=min;
    int b=max;
    while(b != 0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;

}