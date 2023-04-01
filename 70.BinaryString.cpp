// Rest of the code is already given in driver code

class Solution
{
    public:
    long binarySubstring(int n, string a)
    {
        int ones = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == '1')
                ones++;
        }
    return ones * (ones-1) / 2;
    }
};