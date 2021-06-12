#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>m;
	    if(n>m)
	    {
	        cout<<">";
	    }
	    else
	    if(n<m)
	    {
	        cout<<"<";
	    }
	    else
	    cout<<"=";
	    
	}
	return 0;
}

