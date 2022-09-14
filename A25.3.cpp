//class Factorial and define an instance member function to find the Factorial
#include<iostream>
using namespace std;
class Factorial
{
private:
    int n,fact;
public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getfact()
    {
        return fact;
    }
    void calculatefact()
    {
        int i,f=1;
        if(n<=0)
        {
            fact=1;
            return ;
        }
        for(i=1;i<=n;i++)
        {
            f = f*i;
        }
        fact=f;
    }
};
int main()
{
    Factorial f1;
    f1.setN(6);
    f1.calculatefact();
    cout<<"factorial of "<<f1.getN()<<" is "<<f1.getfact()<<endl;
    return 0;
}
