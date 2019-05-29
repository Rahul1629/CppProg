#include <iostream>
#include<map>
using namespace std;

int main()
{
    map <string,string> map1;
    map <string,string> :: iterator it ;
    map <string,string> :: iterator it1 ;
    int k;
    cout<<"how many values you want to insert"<<endl;
    cin>>k;
    for(int i=0;i<k;i++)
    {
    string s1,s2;
    cin>>s1>>s2;
    map1.insert(pair<string,string>(s1,s2));
    }
    cout<<"which category you want to search"<<endl;
    string s;
    cin>>s;
    for(it=map1.begin();it!=map1.end();it++)
    {
        if(it->first==s)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }

    return 0;
}
