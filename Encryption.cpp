#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int L = s.length();
    int low_v = floor(sqrt(L));
    int high_v = ceil(sqrt(L));
    for(int i=0;i<high_v;i++)
    {
        for(int j=i;j<L;j = j+high_v)
        {
            cout<<s[j];
        }
        cout<<" ";
    }
    return 0;
}
