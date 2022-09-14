//a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargN
{
  private:
      int a,b,c;
  public:
      void set(int x,int y,int z)
      {
          a=x; b=y; c=z;
      }
      int largest()
      {
          if(a>=b && a>=c){ return a;}
          else if(b>=a && b>=c){ return b;}
          else {return c;}
      }

};
int main()
{
    LargN l1;
    int a,b,c;
    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;
    l1.set(a,b,c);
    cout<<"largest is "<<l1.largest()<<endl;
    return 0;
}
