#include<iostream>
using namespace std;
class area
{
  int a,l,b;
  public:
  area() 
  {
     l=40;
     b=60;
     cout<<"length:-"<<l<<"\nbreadth:-"<<b;
  }
  area(int s,int h)
  {
     l=s;
     b=h;
  }
  void calc();
  void print();
  ~area();
};
void area::calc()
{
   a=l*b;
}
void area::print()
{
   cout<<"\nArea is : "<<a;
}
area::~area()
{
cout << "\nObject succesfully deleted" << endl;
}
int main()
{
   int l,b;
   area a1;
   a1.calc();
   a1.print();
   cout<<"\nEnter length:-";
   cin>>l;
   cout<<"enter breadth:-";
   cin>>b;
   area a2(l,b);
   a2.calc();
   a2.print();
   return 0;
}