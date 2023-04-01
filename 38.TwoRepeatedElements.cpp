// Rest of the code is already given

class Solution
{
    public:
    pair<int,int> twoRepeated (int arr[], int N)
    {
        pair<int,int>p;
        vector<int>v;
        for(int i=0;i<N+2;i++)
        {
            if(arr[abs(arr[i])]<0)
            {
                v.push_back(abs(arr[i]));
            }
            else
            arr[abs(arr[i])]=-arr[abs(arr[i])];
            
        }
        p.first=v[0];
        p.second=v[1];
        return p;
    }
};