#include <iostream>

using namespace std;
class complex
{
    int r,i;
public:
    friend istream& operator>>(istream& in,complex &ob)
    {

        in>>ob.r>>ob.i;
        return in;
    }
    friend ostream& operator<<(ostream& out,complex &ob)
    {
        out<<ob.r<<"+"<<ob.i<<"i"<<endl;
        return out;
    }
    void operator=(complex &c)
    {
        //complex c1;
        r=c.r+1;
        i=c.i+1;
        //return c1;

    }
};
int main()
{
    complex c;
    cin>>c;
    cout<<c;
    complex c1;
    c1=c;
    cout<<c1;
    return 0;
}
