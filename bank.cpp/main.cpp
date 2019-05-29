#include <iostream>

using namespace std;
class Account
{
protected:
        int balance;
        char cust_name[20];
        int acc_no;

public:
        void getdata()
        {
            cin>>balance;
            cin>>cust_name;
            cin>>acc_no;
        }
        int deposit(int n)
        {
            balance+=n;
            return balance;
        }
        int withdrawal(int n)
        {
            balance-=n;
            return balance;
        }
};
class curr_account : public Account
{
public:
    void getdetails()
    {
        getdata();
    }
    int depositc(int n)
    {
        int k=deposit(n);
        return k;
    }
    int withdrawlc(int n)
    {

           int k=withdrawl(n);


        return k;
    }
    void displayc()
    {
        display();
    }

};
class savings : public Account
{

    void getdetails()
    {
        getdata();
    }
    int depositc(int n)
    {
        int k=deposit(n);
        return k;
    }
    int withdrawlc(int n)
    {
        int k=withdrawl();
    }
    void displayc()
    {
        display();
    }
};
int main()
{
     char type;
     cin>>type;
     if(type=='c')
     {
         curr_account c;
         c.getdetails();
         int n;
         cin>>n;
         c.depositc(n);
         cin>>n;
         c.withdrawlc(n);
         c.displayc();
     }
     else if(type=='s')
     {
         savings s;
         s.getdetails();
         int n;
         cin>>n;
         s.depositc(n);
         cin>>n;
         s.withdrawlc(n);
         s.displayc();
     }
    return 0;
}
