#include <iostream>
using namespace std;
#define ll long long int
int main() {
	
   ll   t;
   ll n,k,i,j;
	cin>>t;
		 ll arr[100000];
	
	for(i=0;i<t;i++)
	{  


	cin>>n>>k;
	   for(j=0;j<n;j++ )
	   {
	   	cin>>arr[j];
	   }
	  
	
	for(j=0;j<n-1;j++)
	{
		if(arr[j]>=k)
		{
		
		arr[j+1]=arr[j+1]+(arr[j]-k);
	     }
	     else
	     cout<<j;  
	}
	while(arr[n-1]>=k)
	     {
	     	arr[n]=arr[n-1]-k;
	     	n++;
		 }
		 cout<<n<<endl;
	}
	  return 0;
	}
	   

