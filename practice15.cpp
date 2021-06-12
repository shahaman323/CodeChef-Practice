#include <iostream>
using namespace std;
int sumDig(int num)
{
	int d,sum=0;
      while(num!=0)
      {
          d=num%10;
          sum=sum+d;
          num=num/10;
      }
      return sum;
	
}

int main() {
	
  int t;
  cin >> t;
  for(int i=0;i<t;i++)
    {
    	int n;
      cin >> n;
      
    
      cout<<sumDig(n)<<endl;
    }
	return 0;
}
