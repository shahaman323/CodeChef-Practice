#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i=0;
	
	int A[100];
	while(n!=42)
	{    cin>>n;
	    A[i]=n;
	    i++;
	}
	for(int j=0;j<i-1;j++)
	{
	    cout<<A[j]<<endl;
	}
	return 0;
}

