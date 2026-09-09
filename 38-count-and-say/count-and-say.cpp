class Solution {
public:
    string countAndSay(int n) {
        char *current=new char[5000];
        char *next=new char[5000];
        strcpy(current,"1");
        for(int i=1;i<n;i++)
        {
            int pos=0;
            int j=0;
            while(current[j] != '\0')
            {
                int digit=current[j];
                int count=0;
                while(current[j] == digit)
                {
                    count++;
                    j++;

                }
                pos=pos+sprintf(pos+next,"%d%c",count,digit);
            }
            next[pos]='\0';
            strcpy(current,next);
        }
        return current;

        
    }
};