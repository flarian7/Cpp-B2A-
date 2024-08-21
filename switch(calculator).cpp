#include<iostream>
using namespace std;

int main()
{
	char operation_no;
	int a = 10;
	int b = 15;
	cout<<"Enter the  operation number : ";
	cin>>operation_no;
	
	switch(operation_no)
	{
		case '+' : cout<<a+b<<endl;
		break;
		case  '-': cout<<a-b<<endl;
		break;
		case '*' : cout<<a*b<<endl;
		break;
		case '/' : cout<<a/b<<endl;
		break;
		case '%' : cout<<a%b<<endl;
		break;
		default : cout<<"Invalid"<<endl;
		
	}
	
	return 0;
}
