#include<iostream>
using namespace std;

int main()
{
	int n = 12345;
	int sum = 0;
	
	while(n>0)
	{
		int last_digit = n % 10 ;
		if(last_digit%2!=0)
		{
			sum += last_digit;
		}
		n = n/10;
	}
	
	cout<<sum<<endl;
	
	return 0;
}
