//a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;
class Area
{
   public:
      int rectangle( int l,int b)
      {
        return l*b ;
      }
      int circle(int r)
      {
        return 3.14*r*r;
      }
      int square(int a)
      {
      return a*a;
      }


};
int main()
{
  Area a;
  cout<<"Area of rectangle is "<<a.rectangle(4,5)<<endl;
  cout<<"Area of circle is "<<a.circle(5)<<endl;
  cout<<"Area of square is "<<a.square(4)<<endl;
  return 0;
}
