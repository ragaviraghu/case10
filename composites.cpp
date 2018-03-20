#include<iostream>
using namespace std;
int main()
{
int N,count=0;
cout<<"Enter a number : "<<endl;
cin>>N;
for(int i=1;i<=N;i++)
{
if(N%i==0)
count=count+1;
}
if(count==2)
cout<<"No (given number is not composite,i.e prime number) "<<endl;
else
cout<<"Yes (given number is composite) "<<endl;
return 0;
}
