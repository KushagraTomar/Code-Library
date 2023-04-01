// Rest of the code is already given

class Solution
{
    public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int> s;
        int i,res=0,curr;
        for (i= 0; i < N; i++)
            s.insert(arr[i]);
        for (i= 0; i< N; i++) {
            if (s.find(arr[i] - 1) == s.end())
            {
                curr = 1;
                while (s.find(curr+arr[i]) != s.end())
                    curr++;
                res= max(res, curr);
            }
        }
        return res;
    }
};