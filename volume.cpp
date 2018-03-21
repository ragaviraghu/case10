#include<iostream>
using namespace std;
int main()
{
float L,B,H,t_area,volume;
cout<<"Enter the length,width and height : "<<endl;
cin>>L>>B>>H;
t_area=2*(L*B+L*H+B*H);
volume=L*B*H;
cout<<"The total surface area is : "<<t_area<<endl;
cout<<"The volume of a cuboid is : "<<volume<<endl;
return 0;
}
