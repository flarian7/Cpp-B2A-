#include<iostream>
using namespace std;

int main()
{
	
int n;
cout<<"Enter the number : ";
cin>>n;
int lastdigit;
int num = n;
int cubesum = 0;

while(n>0)
{
	lastdigit = num % 10 ;
	cubesum += lastdigit*lastdigit*lastdigit;
	num = num / 10;
}

if(cubesum == n)
{
	cout<<n<<" is an armstrong number"<<endl;
}

else
{
	cout<<n<<" is not an armstrong number"<<endl;
}

	return 0;
}
