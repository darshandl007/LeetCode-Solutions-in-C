char* countAndSay(int n) {
    
    char *str= malloc(50000*sizeof(char));
    char *pre=malloc(50000);
    
   strcpy(str,"1");
    for(int i=1;i<n;i++)
    {
        int j=0;
        int pos=0;
            while(str[j] != '\0')
            {
                    char digit = str[j];
                    int count =0;
                    while(str[j] == digit)
                    {
                        count++;
                        j++;
                    }
                  pos= pos +  sprintf(pre+pos,"%d%c",count,digit);
            }
            pre[pos]='\0';
            strcpy(str,pre);
    }



   free(pre);
    return str;
}