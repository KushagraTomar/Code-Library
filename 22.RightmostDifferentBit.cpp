//  Rest of the code is already given

class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        int s =m^n;
        return ffs(s);
    }
};