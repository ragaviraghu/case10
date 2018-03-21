#include<iostream>
using namespace std;
int main()
{
int N,a[10],i;
cout<<"Enter the N value :"<<endl;
cin>>N;
for(i=1;i<=N;i++)
{
cin>>a[i];
if(a[i]!=i)
{
cout<<"The changed number is : "<<i<<endl;
break;
}
}
return 0;
}
