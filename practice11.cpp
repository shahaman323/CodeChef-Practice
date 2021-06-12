#include<iostream>
using namespace std;
bool leapYear(int year)
{
	if(year % 4 ==0)
	{
		if(year%100==0)
		{
			if(year %400==0)
			{
				return true;
			}
			else
			return false;
		}
		else
		return true;
	}
	else
	return false;
}
int main()
{
	int year;
	cout<<"Enter year :";
	cin>>year;
	if(leapYear(year))
	cout<<"Yes "<<year<<"is a leap year";
	else
	cout<<year<<"is not a leap year";
	return 0;
}

