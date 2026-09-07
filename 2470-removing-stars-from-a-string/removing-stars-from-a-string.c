char* removeStars(char* s) {
  
    int len=strlen(s);
      char *arr=malloc(len+1);
   
    int top=0;
    for(int i=0;i<len;i++)
    {
        if(s[i] == '*')
        {
            if(top>0)
            {
                top--;
            }
        }else{
            arr[top] = s[i];
            top++;
        }
    }
    arr[top]='\0';
    return arr;
}