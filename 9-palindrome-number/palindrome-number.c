bool isPalindrome(int x) {
    if(x<0){
        return 0;
    }
    int tmp=x;
    int rev=0;
    long long num=0;
    while(x != 0)
    {
        rev=x%10;
        num=num*10+rev;
        x=x/10;

    }
    if(num==tmp)
    {
        return 1;
    }else{
        return 0;
    }
    
}