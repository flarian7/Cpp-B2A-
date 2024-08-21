#include<iostream>
using namespace std;

int main()
{
	float pencil = 5.21;
	float pen = 46.71;
	float eraser = 2.34;
	float totalbill = pencil + pen + eraser ;
	float tax =  0.18*(totalbill);
	
	cout<<"The GST is : "<<tax<<endl;
	
	float bill_pay = tax + totalbill;
	
	cout<<"The total bill to be payed is : "<<bill_pay<<endl;
	
	
	return 0;
}
