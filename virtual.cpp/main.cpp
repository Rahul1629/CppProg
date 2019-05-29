#include <iostream>

using namespace std;
class abc
{
public:
    virtual void show()
    {
        cout<<"base class"<<endl;
    }
};
class der:public abc
{
public:
    void show()
    {
        cout<<"derived class"<<endl;
    }
};
int main()
{
    abc ob;
    der ob1;
    abc *p=&ob;
    p->show();
    p=&ob1;
    p->show();

    return 0;
}
