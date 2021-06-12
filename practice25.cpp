#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int res=0, rem,temp;
	    cin>>n;
	    temp=n;
	    while(n>0)
	    {
	    rem=n%10;
	    res=res*10+rem;
	    n=n/10;
      	}
      
      	if(temp==res)
      	cout<<"wins"<<endl;
      	else
      	cout<<"loses"<<endl;
	}
	return 0;
}

