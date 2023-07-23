#include<iostream>
using namespace std;
class area
{
   public:
   area (float l)
   {
    cout<<"area of square:"<<l * l<<endl<<endl;
   }
   area (float l, float b)
   {
    cout<<"area of rectangle:"<<l * b<<endl<<endl;
   }
   area (float a, float h, float b)
   {
    cout<<"area of triangle:"<<a*h*b<<endl<<endl;
   }
   area (float a, float pie, float r, float l)
   {
    cout<<"area of sylinder:"<<a*pie*r*l<<endl<<endl;
   }
}; 

int main()
{
    area a(4),b(3,5),c(0.5,4,7),d(2,3.14,10,7);
}