#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hr,min,sec;
    char ch[3];
    scanf("%d:%d:%d%s",&hr,&min,&sec,&ch);
    
    //in C++ we can take input as:-
    /*
    int hr,min,sec;
    char c;
    cin>>hr>>c>>min>>c>>sec;
    */
    
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


//reference link
https://stackoverflow.com/questions/21870509/how-do-i-read-in-time-input-and-format-the-output
