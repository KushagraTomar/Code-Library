//  Rest of the code is already given

class Solution
{
    public:
    bool isSparse(int n)
    {
        int res = n & (n>>1);
    if(res==0)
        return true;
    return false;
    }
};