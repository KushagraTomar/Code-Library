// Rest of the code is already given in driver code

class Solution
{
    public:
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length()) 
        {
            return false;
        }
    
        int a[26] = {0};
        int b[26] = {0};
    
        for(int i=0;i<str2.length();i++) 
        {
            if(b[str2[i]-'a'] == 0 && a[str1[i]-'a'] == 0) 
            {
                b[str2[i]-'a'] = str1[i];
                a[str1[i]-'a'] = str2[i];
            
            } 
            else 
            {
                if(b[str2[i]-'a'] == str1[i] && a[str1[i] - 'a'] == str2[i]) 
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};