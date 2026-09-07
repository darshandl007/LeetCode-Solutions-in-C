bool isIsomorphic(char* s, char* t) {
    int len1=strlen(s);
    int len2= strlen(t);
    if(len1 != len2)
    {
        return false;
    }
    
    int st[128]={0};
    int ts[128]={0};

    for(int i=0; s[i] != '\0'; i++)
    {
        unsigned char a = s[i];
        unsigned char b = t[i];

        if(st[a] != 0 && st[a] != b)
        {
            return false;
        }

        if(ts[b] != 0 && ts[b] != a)
        {
            return false;
        }

        st[a]=b;
        ts[b]=a;
    }
    return true;


}