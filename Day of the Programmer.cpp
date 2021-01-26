#include <bits/stdc++.h>
using namespace std;


int main()
{
    int yr;
    cin>>yr;
    int val = 41;
    if(yr==1918)
    {
        cout<<val-15<<"."<<0<<9<<"."<<yr;
    }
    else
    if((yr%4==0) && (yr>=1700 && yr<=1900))
    {
        cout<<val-29<<"."<<0<<9<<"."<<yr;
    }
    else
    if((yr%4==0) && (yr%100!=0) || (yr%400==0))
    {
        cout<<val-29<<"."<<0<<9<<"."<<yr;
    }
    else{
        cout<<val-28<<"."<<0<<9<<"."<<yr;
    }
    return 0;
}
