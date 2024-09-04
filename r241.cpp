//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i,n;
//	cin>>n;
//	
//	int product = 1;
//	
//	for(i=1;i<=n;i++)
//	{
//		product = product * i;
//	}
//	
//	cout<<product<<endl;
//	
//	
//	
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	
	for(i=n;i<=n*10;i+=n)
	{
		cout<<i<<endl;
	}
	
	return 0;
}
