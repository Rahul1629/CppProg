//templates are used for generic programming.
#include<iostream>
using namespace std;
template<class T>
//void add(T a,T b)
T add(T a,T b)
{
    T c;
    c=a+b;
    return c;
}
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(1.1,2.2)<<endl;

    string a="Rahul";string b="Dung";
    cout<<add(a,b);
    return 0;

}
