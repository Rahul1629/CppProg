#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    int rollno;
protected:
    string course;
public:
    void get_rollno()
    {
        cin>>rollno;
    }
    void show_rollno()
    {
        cout<<rollno<<endl;
    }
};
class result : public student
{
    int marks[3];
public:
    void getdata()
    {
        get_rollno();
        cin>>course;
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    int totalmarks()
    {
        int i,sum=0;
        for(i=0;i<3;i++)
        {
            sum+=marks[i];
        }
        return sum;
    }
    void display()
    {

        show_rollno();
        cout<<course<<endl;
        cout<<totalmarks()<<endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.display();
    return 0;
}
