// Rest of the code is already given

class Solution
{
  public:
    int sumOfDigits(int n)
    {
        if(n<10)
            return n;
        else
            return sumOfDigits(n/10)+n%10;
    }
};