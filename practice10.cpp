#include<iostream>
using namespace std;
//void convert();
float fah,cel;
void convert()
{
	cel=((fah-32)*5)/9;
}
int main()
{
	cout<<"Enter the degree in Fah :";
	cin>>fah;
	convert();
	cout<<"The degree in cel is:"<<cel;
	return 0;
}

