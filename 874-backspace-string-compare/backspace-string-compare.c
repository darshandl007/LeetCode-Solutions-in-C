bool backspaceCompare(char* s, char* t)
{
    int len1=strlen(s);
    int len2=strlen(t);

    char arr1[len1+1];
    char arr2[len2+1];

    int top1=0;
    int top2=0;
   
   for(int i=0;i<len1;i++)
   {
     if(s[i] == '#')
     {
        if(top1 > 0)
        {
            top1--;
        }
    }else{
            arr1[top1]=s[i];
            top1++;
        }
     
   }
   for(int i=0;i<len2;i++)
   {
     if(t[i] == '#')
     {
        if(top2 > 0)
        {
            top2--;
        }
        }else{
            arr2[top2]=t[i];
            top2++;
        }
     
   }
    if(top1 != top2)
    {
        return 0;
    }

    for(int i=0;i<top1;i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;

}