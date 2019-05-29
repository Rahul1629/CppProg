#include <iostream>

using namespace std;
class matrix
{
    int **a;
    int m,n;
public:
    matrix(int k,int l)
    {
        m=k;n=l;
        a=new int*[m];

        for(int i=0;i<n;i++)
        {
            a[i]=new int[n];
        }
    }
    friend istream & operator >> (istream & in,matrix &ma)
    {
        int i,j;
        for(i=0;i<ma.m;i++)
        {
            for(j=0;j<ma.n;j++)
            {
                in>>ma.a[i][j];
            }
        }
        return in;
    }
    friend ostream & operator << (ostream & out , matrix &ma)
{
        int i,j;
        for(i=0;i<ma.m;i++)
        {

            for(j=0;j<ma.n;j++)
            {

                out<<ma.a[i][j]<<" ";
            }
            cout<<endl;
        }
        return out;
    }
    operator int()
    {
        int i,j,sum=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum+=a[i][j];
            }
        }
        return sum;
    }
    void operator=(int count)
    {
        int i,j;

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]+=count;
            }
        }
        //return ma;
    }
};
int main()
{
    int k,l;
    cin>>k>>l;


    matrix ma(k,l);
    cin>>ma;
    int sum=ma;
    cout<<sum;
    int count;
    cin>>count;
    ma=count;
    cout<<ma;

    return 0;
}
