#include<iostream>
using namespace std;
int main() 
{
int N,arr[N],sum=0;
cout<<"Enter the N value : "<<endl;
cin>>N;
for(int i=0;i<N;i++)
{
cin>>arr[i];
sum=sum+arr[i];
}
cout<<"The sum of given N numbers is : "<<sum<<endl;
return 0;
}
