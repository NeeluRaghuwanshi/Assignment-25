//a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
   private:
     int l,b;
   public:
      void set(int x,int y)
      {
        l=x; b=y;
      }
      int area()
      {
        return l*b ;
      }

};
int main()
{
  Rectangle r;
  r.set(4,6);
  cout<<"Area is "<<r.area()<<endl;
  return 0;
}
