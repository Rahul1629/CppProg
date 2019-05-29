#include <iostream>

using namespace std;
class A
{
    int a;
public:
     A()
    {
        cout<<"Constructor in class A"<<endl;
    }
    A(int x)
    {
        a=x;
        cout<<a<<endl;
    }
    ~A()
    {
        cout<<"Destructor in class A"<<endl;
    }
    /*int get(int x)
    {
        a=x;
        return a;
    }
    void print()
    {
        cout<<a;
    }*/
};
class B:virtual public A
{
public:
     B()
    {
        cout<<"Constructor in class B"<<endl;
    }
    ~B()
    {
        cout<<"Destructor in class B"<<endl;
    }
   /* int b;
public:
    int get(int x,int y)
    {
        b=y;
        return b;
    }
    void print()
    {
        cout<<b;
    }
*/
};
class C:virtual public A
{
public:
     C()
    {
        cout<<"Constructor in class C"<<endl;
    }
    ~C()
    {
        cout<<"Destructor in class C"<<endl;
    }
    /*int c;
public:
    int get(int x,int w)
    {
        c=w;
        return c;
    }
    void print()
    {
        cout<<c;
    }*/
};
class D:public B,public C
{
    int d;
public:
    D()
    {
        cout<<"Constructor in class D"<<endl;
    }
    D(int x,int y):A(x)
    {
        d=y;
        cout<<d<<endl;
    }
    ~D()
    {
        cout<<"Destructor in class D"<<endl;
    }
   /* int d;
    public:
    int get(int x,int y,int w,int z)
    {
       d=z;
    }
    void print()
    {

        cout<<d;
    }*/
};
int main()
{

    D ob(1,4);
    //ob.get(1);
   /* A a;
    B b;
    C c;

    a.print();
    b.print();
    c.print();*/
    //ob.print();
    return 0;
}
