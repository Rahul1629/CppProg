#include <iostream>

using namespace std;
template<class T1,class T2>
void print(T1 a,T2 b)
{
    cout<<a<<endl<<b<<endl;
}
void print(double a,char b)
{
    cout<<a<<"\t"<<b<<"\t";
}
int main()
{
   char a='r';
    print(4,1.1);
    print(6.2,a);
    return 0;
}

