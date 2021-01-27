#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,p;
	cin>>n>>p;
	int front_count = 0;
	int back_count = 0;
	front_count = p/2;
	if(n%2==0)
	{
		back_count = (n-p+1)/2;
	}
	else{
		back_count = (n-p)/2;
	}
	if(front_count<back_count)
	{
		cout<<front_count;
	}
	else{
		cout<<back_count;
	}
	return 0;
}
