#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int num = n; //Creating copy
	
	int dig1 = num % 10;
	num/=10;
	int dig2 = num % 10;
	num/=10;
	int dig3 = num;
	
	int sum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
	
	if(sum==n)
	{
		cout<<n<<" is an armstrong number";
	}
	
	else 
	{
		cout<<n<<" is not an armstrong number";
	}
	
	
	return 0;
}
