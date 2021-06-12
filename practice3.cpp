#include<iostream>
using namespace std;
int main()
{
	int n,k,i;
	cout<<"enter number of array and largest number : ";
	cin>>n>>k;
	int arr[100];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
	
	if(arr[i]<=k)
	{
	
	
		cout<<arr[i];
}
}
	return 0;
}

