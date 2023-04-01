// Rest of the code is already given

class Solution
{
    public:
    long long factorial(int N)     
    {
        if(N > 1)
        return N * factorial(N - 1);
        else
        return 1;
    }

};