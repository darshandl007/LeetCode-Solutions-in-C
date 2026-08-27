int getSum(int a, int b) 
{
   
   unsigned int first=(unsigned int)a;
    unsigned int sec=(unsigned int)b;
    unsigned int carry=0;
    unsigned int  sum=0;
    while(sec != 0)
    {
        sum=first^sec;
        carry=(first&sec)<<1;
        sec=carry;
        first=sum;
    }    
     return (int)first;
}