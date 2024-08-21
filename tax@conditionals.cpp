#include<iostream>
using namespace std;

int main()
{
	float income;
	float tax;
	cout<<"Enter the income(in lakhs) : ";
	cin>>income;
	if(income<5)
	{
		tax = 0;
	 } 
	 
	 else if(income>=5)
	 {
	 	tax = 0.2*income ;
	 }
	 
	 else 
	 {
	 	tax = 0.3*income;
	 }
	 
	 cout<<(tax * 100000)<<" is the tax to be payed "<<endl;
	
	
	return 0;
}
