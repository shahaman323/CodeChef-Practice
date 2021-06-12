#include<iostream>
using namespace std;
int main()
{
	int num,temp,reverse=0,rem;
	cout<<"enter the number :";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		reverse=reverse*10+rem;
		temp=temp/10;
		return 0;
	}
}
