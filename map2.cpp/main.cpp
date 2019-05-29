#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool predicate(float p)
{
    cout<<p<<endl;
    return ((p>0)&&(p<=39));
}
bool predicate1(float p)
{
  cout<<p<<endl;
    return ((p>40)&&(p<=49));

}
bool predicate2(float p)
{
    cout<<p<<endl;
    return ((p>50)&&(p<=59));

}
bool predicate3(float p)
{
    cout<<p<<endl;
    return ((p>60)&&(p<=69));

}
bool predicate4(float p)
{
    cout<<p<<endl;
    return ((p>70)&&(p<=79));

}
bool predicate5(float p)
{
    cout<<p<<endl;
    return ((p>80)&&(p<=89));

}
bool predicate6(float p)
{
    cout<<p<<endl;
    return ((p>90)&&(p<=99));

}

int main()
{
    multimap<int,float> m;
    int n,m1;
    cin>>n>>m1;
    vector<float> v;
    for(int i=0;i<n;i++)
    {
        int k;
        int m2;
        cin>>k>>m2;
        float p=m2*100/m1;
        m.insert(pair<int,float>(k,m2));
        v.push_back(p);
    }
    multimap<int,float>::iterator it;
    cout<<"Roll number"<<"\t"<<"marks obtained"<<endl;
     for(it=m.begin();it!=m.end();it++)
    {
        cout<<"\t"<<it->first<<"\t\t"<<it->second<<endl;
    }
    int count_1=count_if(v.begin(),v.end(),predicate);
    cout<<count_1<<endl;
    int count_2=count_if(v.begin(),v.end(),predicate1);
    cout<<count_2<<endl;
    int count_3=count_if(v.begin(),v.end(),predicate2);
    cout<<count_3<<endl;
    int count_4=count_if(v.begin(),v.end(),predicate3);
    cout<<count_4<<endl;
    int count_5=count_if(v.begin(),v.end(),predicate4);
    cout<<count_5<<endl;
    int count_6=count_if(v.begin(),v.end(),predicate5);
    cout<<count_6<<endl;
    int count_7=count_if(v.begin(),v.end(),predicate6);
    cout<<count_7<<endl;


}

