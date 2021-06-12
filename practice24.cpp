#include <iostream>
using namespace std;

int main() {
	int t,n,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int sum;
	    cin>>a>>b>>c;
	    sum=a+b+c;
	    if(sum==180)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

