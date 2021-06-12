#include <iostream>
using namespace std;

int main() {
	int a[100],n;
	int even,odd;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    even++;
	    else
	    odd++;
	}
	if(even>odd)
	cout<<"READY FOR BATTLE";
	else
	cout<<"NOT READY FOR BATTLE";
	
	return 0;
}

