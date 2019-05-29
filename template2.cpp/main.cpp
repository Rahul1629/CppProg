#include<iostream>
using namespace std;
template<class T1,class T2>
void add(T1 a,T2 b)
{
    cout<<a<<endl<<b<<endl;
}
int main()
{
   string a="rahul";
    add(4,1.1);
    add(6,a);
    return 0;
}

