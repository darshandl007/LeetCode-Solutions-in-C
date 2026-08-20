

char * mergeAlternately(char * word1, char * word2){
    int len1=strlen(word1);
    int len2=strlen(word2);
    char *str=malloc((len1+len2+1)*sizeof(char));
    int i=0; int j=0;
    int k=0;
    while(word1[i] != '\0' || word2[j] != '\0')
    {   
        if(word1[i] != '\0')
        {
             str[k]=word1[i];
            i++;
            k++;
        }
       if(word2[j] != '\0')
        {
             str[k]=word2[j];
            j++;
            k++;
        }
        
    }
    str[k] = '\0';
    return str;
}