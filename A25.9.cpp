//a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
   private:
     int r;
   public:
      void set(int x)
      {
        r=x;
      }
      int area()
      {
        return 3.14*r*r;
      }

};
int main()
{
  Circle c;
  c.set(5);
  cout<<"Area is "<<c.area()<<endl;
  return 0;
}
