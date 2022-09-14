//a class greatest and define an instance member function to find the Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class Greatest
{
  private:
      int a,b,c;
  public:
      void set(int x,int y,int z)
      {
          a=x; b=y; c=z;
      }
      int greatest()
      {
          if(a>=b && a>=c){ return a;}
          else if(b>=a && b>=c){ return b;}
          else {return c;}
      }

};
int main()
{
    Greatest g1;
    int a,b,c;
    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;
    g1.set(a,b,c);
    cout<<"Greatest is "<<g1.greatest()<<endl;
    return 0;
}
