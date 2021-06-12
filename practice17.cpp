#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int first=0,last=0;
		cin>>n;
		last=n%10;
		while(n!=0)
		{
			if(n<10)
			{
				first=n;
			}
			n=n/10;
		}
		cout<<first+last;
	}
	return 0;
}
