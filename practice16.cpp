#include<iostream>
using namespace std;
unsigned long fact(unsigned long long num)
{
	if(num==0)
	return 1;
	return num*fact(num-1);
}
int main()
{
	unsigned long  t;
	unsigned long n;
	cin>>t;
	if(t<=100)
	{
         	for(int i=0;i<t;i++)
	  {
		cin>>n;
		if(n<=100)
		{
		int result=fact(n);
		cout<<result<<endl;
       	}
	  }
	}
	return 0;
}
