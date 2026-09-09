class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int top1=0;
        int top2=0;

        char str1[s.length()];
          char str2[t.length()];

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                if(top1>0)
                {
                    top1--;
                }
            }else
            {
                str1[top1]=s[i];
                top1++;
            }
        }

        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                if(top2>0)
                {
                    top2--;
                }
            }else
            {
                str2[top2]=t[i];
                top2++;
            }
        }
        if(top1 != top2)
        {
            return false;
        }

        for(int i=0;i<top1;i++)
        {
            if(str1[i] != str2[i])
            {
                return false;
            }
        }
        return true;
    }
};