#include<iostream>
using namespace std;

int main()
{
	int num;
	 do 
	 {
	 	cout<<"enter number :";
	 	cin>>num;
	 	if(num % 10 == 0)
	 	{
	 		break;
		 }
		 cout<<"you entered"<<num<<endl;
	 }
	 while(true);

	return 0;
}
