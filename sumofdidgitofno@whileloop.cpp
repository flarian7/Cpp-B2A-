#include<iostream>
using namespace std;

int main()
{
	int n = 10829;
	int sum = 0;
	while(n>0)
	{
		int last_digit = n%10;
//		cout<<last_digit<<endl;
		 sum+= last_digit;
		 n= n/10;
	}
	
	cout<<sum<<endl;
	
	return 0;
}
