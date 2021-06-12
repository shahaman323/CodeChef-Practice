#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int withD;
	float bal;
	cin>>withD>>bal;
	if(withD%5==0)
	{
	    bal=bal-withD-0.50;
	    cout<<fixed<<setprecision(2)<<bal;
	}
	else
	cout<<fixed<<setprecision(2)<<bal;
	return 0;
}
