#include<iostream>
#include<string.h>
using namespace std;

class Banksystem
{
    int AC_number;
    char AC_name[20];
    char AC_type[20];
    char AC_branch[30];
    double AC_balance;

 public:
        void setbankdata()
        {
            cout << "ENTER ACOUNT NUMBER= ";
            cin >> this->AC_number;
            fflush(stdin);
            cout << "ENTER ACOUNT NAME= ";
            gets(this->AC_name);
            cout << "ENTER ACOUNT TYPE= ";
            cin >> this->AC_type;
            cout << "ENTER ACOUNT BRANCH= ";
            cin >> this->AC_branch;
            cout << "ENTER ACOUNT BALANCE= ";
            cin >> this->AC_balance;
        }   

        void getbankdata()
        {
            cout << endl
                 << "ACOUNT NUMBER=" << this->AC_number << endl
                 << "ACOUNT NAME=" << this->AC_name << endl
                 << "ACOUNT TYPE=" << this->AC_type << endl
                 << "ACOUNT BRANCH=" << this->AC_branch << endl
                 << "ACOUNT BALANCE=" << this->AC_balance << endl;
        }
};
int main()
{
     int B;
        cout << endl<< " !!ENTER BANK DATA!!";
        cout << "ENTER NUMBER OF BANK= ";
        cin >> B;

        Banksystem BANK[B];
        for (int i = 0; i < B; i++)
        {
                BANK[i].setbankdata();
        }

        for (int i = 0; i < B; i++)
        {
                BANK[i].getbankdata();
        }
}