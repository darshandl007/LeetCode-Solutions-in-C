class Solution {
public:
    string reorganizeString(string s) {

        int fre[26] ={0};

        for(int i=0;i<s.length();i++)
        {
            fre[s[i]-'a']++;
        }
        int maxfre=0;
        int maxchar=0;

        for(int i=0;i<26;i++)
        {
            if(fre[i] > maxfre)
            {
                maxfre = fre[i];
                maxchar = i;
            }
        }
        if(maxfre > (s.length() + 1)/2)
        {
            return "";
        }

        string result(s.length(), ' ');
        int index=0;

        while(fre[maxchar] > 0)
        {
            result[index] = 'a' + maxchar;
            fre[maxchar]--;
            index += 2;
        }
        for(int i=0;i<26;i++)
        {
            while(fre[i] > 0)
            {
                if(index >= s.length())
                {
                    index = 1;
                }

                result[index] = 'a' +i;
                fre[i]--;
                index += 2;
            
        
            }
        }
        return result;
    }
};