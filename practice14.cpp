#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>ans;
        if(ans%k==0)
        {
        	count++;
		}
        
    }
    cout<<count;
    return 0;
}
