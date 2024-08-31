#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cout<<"enter the value of n : ";
	cin>>n;
	int sum = 0;
	
   i = 1;
   while(i<=n)
   {
   	sum = sum + i;
   	i = i+1 ;
   }
   cout<<sum<<endl;
	
	return 0;
}

