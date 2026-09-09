class Solution {
public:
    string removeStars(string s) {
        
        char *str =new char[s.length()+1];
        int top=0; 

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '*')
            {
                if(top>0)
                {
                    top--;
                }
            }else{
                str[top]=s[i];
                top++;
            }
        }
        str[top]='\0';
        return str;
    }
};