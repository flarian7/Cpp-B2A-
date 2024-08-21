#include<iostream>
using namespace std;
int codequotient1(int b, int c)
{
          return c + 2 * b;
}
int main()
{
 int a = 4, b = 2, c = 5;
 a = codequotient1(c, b);
 c = codequotient1(b, a);
 
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c<<endl;
 
 return 0;
}


