#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
			int rem=0;
		cin>>n;
		while(n>0)
		{
	
		rem=rem*10+n%10;
		n=n/10;
	     }
	     cout<<rem<<endl;
	     
	}
	return 0;
}
