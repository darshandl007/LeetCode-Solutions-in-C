bool checkPerfectNumber(int num) {
    int sum=1;
    int flag=0;
    if(num<=1){
        return 0;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
            flag=1;
        }
    }
    printf("%d",sum);
    if(sum==num){
    return 1;
    }else{
        return 0;
    }
    
}