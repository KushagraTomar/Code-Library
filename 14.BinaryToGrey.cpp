//  Rest of the code is already given

class Solution{
    public:
    int greyConverter(int n)
    {
        return n ^ (n >> 1); 
    }
};