#include<iostream>
using namespace std;
int main()
{
	int num;
	do
	{
		cout<<"enter the number : ";
		cin>>num;
		if(num % 10 == 0)
		{
			continue;
		}
		cout<<"you entered : "<<num<<endl;
	}while(true);
	
	return 0;
}
