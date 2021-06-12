#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll queries[n+1];
    for(ll i=0;i<n;i++)
    {
      cin>>queries[i];
    }

    ll rem=0;
    ll flag=0;
    ll value=0;

    for(ll i=0;i<n;i++)
    {

      if(queries[i]>k)
      {
      rem=0;
      rem=abs(queries[i]-k);
      }
      if(rem!=0)
      {
        queries[i+1]=rem+queries[i+1];
      }
      if(queries[i]<k)
      {
        flag=1;
        value=i;
      }
    }
    if(flag)
    {
      cout<<value+1<<endl;
    }
    else
    {
      cout<<queries[n-1]+1<<endl;
    }

  }
  return 0;
}
