char* countAndSay(int n) {

    char *current=malloc(5000);
    char *prev=malloc(5000);

    strcpy(current,"1");

    for(int i=1;i<n;i++)
    {
        int j=0;
        int pos=0;
        while(current[j] != '\0')
        {
                char digit=current[j];
                int count=0;
                while(current[j] == digit)
                {
                    j++;
                    count++;
                }
                pos=pos+sprintf(pos+prev,"%d%c",count,digit);
        }
        prev[pos]='\0';
        strcpy(current,prev);
    }

    return current;


}