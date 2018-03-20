#include <iostream>
using namespace std;
int main() 
{ int N,product=1;
cout<<"Enter the number : "<<endl;
cin>>N;
while(N!=0)
{
product=product*(N%10);
N=N/10;
}
cout<<"The product of digits of number is : "<<product<<endl;
return 0;
}
