#include <iostream>

using namespace std;
#include<list>
int main()
{
    int i=0;
    list<int> list1;
    list<int> :: iterator it;
    while(*it!=0)
    {
        cin>>list1[i];
        cout<<*it<<endl;
        i++;
    }


    return 0;
}
