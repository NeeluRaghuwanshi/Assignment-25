// class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include <iostream>
using namespace std;
class Square
{
private:
int n,sq;
static int count;
public:
    void set(int x)
    {
     n=x;
    }
    int square()
    {
        int s;
        s=n*n;
        cout<<"square of "<<n<<" is "<<s<<endl;
        count++;
        cout<<"calling square function "<<count<<" times"<<endl;

    }
};
int Square::count=0;

int main()
{
    Square s1;
    s1.set(6);
    s1.square();
    s1.set(7);
    s1.square();
    return 0;
}
