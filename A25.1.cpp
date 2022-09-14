//class Complex to represent a complex number.
#include<iostream>
using namespace std;
class Complex
{
  private:
     int a,b;
  public:
      int set(int x,int y)
      {
          a=x;
          b=y;
      }
      void print()
      {
          cout<<a<<"+"<<b<<"i"<<endl;
      }
};
int main()
{
    Complex c1,c2;
    c1.set(3,4);
    c2.set(5,6);
    c1.print();
    c2.print();
    return 0;
}
