#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if(n<3)
        {
            if(n==1)
            return true;
        }
        if(n%3==0)
        return isPowerOfThree(n/3);
        else
        return false;
    }
};
//
int main()
{
    Solution S;
    cout<<S.isPowerOfThree(45);
    return 0;
}
