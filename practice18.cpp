#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,rem;
	    int count=0;
	    cin>>n;
	    while(n!=0)
	    {
	        if(n%10==4)
	        {
	           count++ ;
	        }
	        n=n/10;
	    }
	    cout<<count;
	}
	return 0;
}

