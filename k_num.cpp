#include<iostream>
using namespace std;
int main() 
{
int N,K,arr[N];
cout<<"Enter the N value : "<<endl;
cin>>N;
cout<<"Enter the K value : "<<endl;
cin>>K;
for(int i=0;i<N;i++)
{
cin>>arr[i];
}
cout<<"The  element in K th position is : "<<arr[K-1]<<endl;
return 0;
}
