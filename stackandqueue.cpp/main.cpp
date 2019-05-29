#include <iostream>

using namespace std;
class list
{
public:
    void store()=0;
    void retrieve()=0;
};
class stack : public list
{
    int a[10],top;
public:
    stack()
    {
        top=-1;
    }
    void store()
    {
        int x;
        cin>>x;
        a[++top]=x;
    }
    void retrieve()
    {
        cout<<a[top--];
    }
};
class queue : public list
{
    int a[10],f,r;
public:
    stack()
    {
        f=-1;
        r=-1;
    }
    void store()
    {
        int x;
        cin>>x;
        a[++top]=x;
    }
    void retrieve()
    {
        cout<<a[top--];
    }
};
int main()
{

    return 0;
}
