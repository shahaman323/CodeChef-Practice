#include<iostream>
using namespace std;
int areaRectangle(int length , int breadth);
int main()
{
	int length,breadth,area;
	cout<<"Enter the length of the room:";
	cin>>length;
	cout<<"Enter the breadth of the room:";
	cin>>breadth;
	area=areaRectangle(length,breadth);
	cout<<"The area of the room :"<<area;
	return 0;
}
int areaRectangle(int l , int w)
{
	return l*w;
}
