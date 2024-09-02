#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int lastdigit;
	int sdigit,tdigit;
	int num = n;
	

	lastdigit = num % 10 ;
	num = num / 10 ;
//	cout<<lastdigit;
     sdigit = num % 10 ;
    num = num / 10;
    
     tdigit = num;

int sum = lastdigit*lastdigit*lastdigit + sdigit*sdigit*sdigit + tdigit*tdigit*tdigit;
	
	if(sum==n)
	{
		cout<<n<<" is an armstrong number "<<endl;
			
}

else
{
	cout<<n<<"is not an armstrong number"<<endl;
	}	
	return 0;
}
