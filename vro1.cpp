#include<iostream>
using namespace std;

int main()
{
	int n = 10829;
	int lastdigit;
	int result = 0;
	
	while(n>0)
	{
		lastdigit = n % 10;
		result = result * 10 + lastdigit ;
		n = n / 10 ;
	}
	
	cout<<result;
	
	
	
	
	return 0;
}
