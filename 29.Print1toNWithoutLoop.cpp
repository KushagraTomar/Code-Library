// Rest of the code is already given

class Solution
{
    public:
    void printNos(int N)
    {
        if (N<=0){
            return;
        }
            printNos(N-1);
            cout<<N<<" ";
    }
};