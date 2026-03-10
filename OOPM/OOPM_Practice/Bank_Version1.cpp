#include<iostream>
using namespace std;

class Account
{
    private:
        string userName;
        string userPassword;
        int userBalance;

    public:
        Account(string name,int balance, string password)
        {
            userName = name;
            userPassword = password;
            userBalance = balance;
        }

        int deposite(int amount, string password)
        {

            if(password != userPassword)
                {
                    cout<<"Incorrect Password try later !";
                }

            if (amount < 0)
            {
                cout<<"Cannot deposite negative amount";
            }
            userBalance = userBalance + amount;
            return userBalance;
        }
        
        int withdraw(int amount, string password)
        {
            if(password != userPassword) cout<<"Invalid Password"<<endl;

            if(amount > userBalance) cout<<"Desired Amount is more than current balance\n Cannot withdraw money !!"<<endl;
            
            if(amount < 0) cout<<"Cannot withdraw negative money\n";
            
            userBalance = userBalance - amount;
            return userBalance;
        }

        int getBalance(string password)
        {
            if(password != userPassword) cout<<"Invalid Password !!"<<endl;

            return userBalance;
        }



        void show()
        {   
            cout<<"     Name :"<<userName<<endl;
            cout<<"     Balance :"<<userBalance<<endl;
            cout<<"     Password :"<<userPassword<<endl;
            cout<<endl;
        }
};

int main()
{   
    
    Account acc("Sameer",2000,"sameer1839S");
    // acc.show();
    // cout<<endl;
    // acc.deposite(100,"sameer1839S");
    // cout<<"Account Balance After Depositing 100 in user Acccount :"<<endl;
    // acc.show();

    cout<<"Creating New Accounts from same Class \n";

    Account acc2("ROodraksh",100,"Superb$1839S");
    Account acc3("Aryan",2000,"Aryan@123");
    Account acc4("Shivansh",1000,"Ahivansh@123");

    acc2.show();

    cout<<"Applying some method on Account 2 \n";

    acc2.deposite(1000,"Superb$1839S");
    acc2.show();
    

    // Creating a Interface for the BAnk manager to handle and manah=ge the bank accounts

    cout<<"Select the choices given below\n\n";
    cout<<"Select 1 for Open a new Account\nSelect 2 for withdraw money from account\nSelect 3 to Deposite Money\nSelect 4 to get Account details\nSelect 5 for Balance enquiry\n";

    // void openAccount();
    // void withdrawMoney();
    // void depositeMoney();
    // void balanceEnquiry();
    // void getDetails();

    cout<<"What do you want to do ?\nSelect your choice :";
    int choice;
    cin>>choice;

    string userName;
    string userPassword;
    int userBalance;


    return 0;
}