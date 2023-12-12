#include<iostream>
using namespace std;

class Account
{
private:
    double balance;
    string accName;
public:
    Account(){}
    ~Account() // Deleted Object constructore
    {
        cout <<"Object is deleted \n";
    }

    Account (double amount,string name)
    {
        balance =amount;
        accName =name;
        cout <<"Account Name : " <<accName <<endl;
        cout <<"Initial Balance : " <<balance <<endl;

    }
    void diposit (double amount)
    {
        if(amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout <<"Lower Amount Not Accepteble" <<endl;
        }

    }
    void withdrow (double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout <<"Your Balance is Low  please Currect amount Enter " <<endl;
        }

    }
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    Account a1(5000 ,"Arian awal");
    a1.diposit(10000);
    a1.withdrow(7000);
    cout <<"current  balance : " <<a1.getBalance() <<endl;
    cout <<"-------------------------" <<endl;


    Account a2(20000,"Abdullah");
    a2.diposit(7000);
    a2.withdrow(2000);
    cout <<"current  balance : " <<a2.getBalance() <<endl;
    cout <<"-------------------------" <<endl;

    return 0;
}
