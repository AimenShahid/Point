#include<iostream>
#include "point.h"
using namespace std;
int main()
{
  point a(2.5 , 3.5);
  point b(1.1 , 1.2);
  point *c;
  point d;
  b = point(3.0 , 4.0);
  c = new point(5.0 , 6.0);
  cout<<"C:"<<*c<<endl;
  d = b + a;
  d.display();
  cout<<"D:"<<d<<endl;
  if(b > a )
  {
    cout<<"b > a"<<endl;
  }
  else
  {
    cout<<"b < a"<<endl;
  }
  d = a + 10.4;
  d.display();
  cout<<d<<endl;
  system("pause");
}
