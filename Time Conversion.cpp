#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hr,min,sec;
    char ch[3];
    scanf("%d:%d:%d%s",&hr,&min,&sec,&ch);
    if(strcmp(ch,"PM")==0 && hr!=12)
    {
        hr = hr+12;
    }
    if(strcmp(ch, "AM")==0 && hr==12)
    {
        hr = 0;
    }
    printf("%02d:%02d:%02d",hr,min,sec);
    return 0;
    
}
