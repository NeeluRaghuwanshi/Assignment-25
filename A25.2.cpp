//class Time to represent Time (like 3 hr 45 min 20 sec).
#include<iostream>
using namespace std;
class Time
{
private:
    int hr,min,sec;
public:
    int setTime(int x,int y,int z)
    {
        hr=x;
        min=y;
        sec=z;
    }
    void showTime()
    {
        cout<<hr<<" hr  "<<min<<" min  "<<sec<<" sec"<<endl;
    }
};
int main()
{
    Time t1;
    t1.setTime(3,45,59);
    t1.showTime();
    return 0;
}
