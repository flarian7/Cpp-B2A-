#include<iostream>
using namespace std;

int main()
{
	float p,r,t;
	cout<<"The principal is  : ";
	cin>>p;
	cout<<"The rate of interest is  : ";
	cin>>r;
	cout<<"The time is  : ";
	cin>>t;
	
	float simple_interest = (p*r*t)/100;
	cout<<"The simple interest is : "<<simple_interest<<endl;
	
	return 0;
}
