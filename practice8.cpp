#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter your score :";
	cin>>score;
	if(score>=70)
	{
		if(score>=90)
		{
			cout<<"Grade A";
			return 0;
		}
		if(score>=80)
		{
			cout<<"Grade B";
			return 0;
		}
		cout<<"Grade C";
	}
	else
	cout<<"Grade F";
	return 0;
}
