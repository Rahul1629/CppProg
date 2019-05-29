#include <iostream>

using namespace std;
class abc
{
public:
    virtual void a()
    {
        cout<<"a abc"<<endl;
    }
    virtual void c()
    {
        cout<<"c abc"<<endl;
    }
};
class der:public abc
{
public:
    virtual void b()
    {
        cout<<"b def"<<endl;
    }
    virtual void c()
    {
        cout<<"c def"<<endl;
    }

};
int main()
{
    abc *p=new der;
    p->a();
    p->c();
    ((der*)p)->b();
    return 0;
}
