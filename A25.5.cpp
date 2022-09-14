//class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNum
{
private:
    int real,rev;
public:
    void set(int x)
    {
        real=x;
    }
    int reverse()
    {
        int r= 0, count= 0;
        while (real)
        {
            if (real % 10 == 0)
                count++;
            r = r * 10 + real % 10;
            real /= 10;
        }
        return r;
    }
};
int main()
{
    ReverseNum r1;
    int n;
    cout<<"Enter a number ";
    cin>>n;
    r1.set(n);
    cout<<"Reverse of "<<n<<" is "<<r1.reverse()<<endl;
    return 0;
}
