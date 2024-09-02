#include<iostream>
using namespace std;

int main()
{
	int n = 17258;
	int lastdigit;
//	int sum = 0;
    int result;
	
	while(n>0)
	{
		lastdigit = n % 10;
	    result = result * 10 + lastdigit; 
		n = n / 10;
		 
	}
	cout<<result<<endl;
	return 0;
}


