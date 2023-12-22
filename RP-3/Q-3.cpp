#include <iostream>
#include <string>
using namespace std;

class A
{
    protected:
                int Emp_id;
                char Emp_name[20];
                char Emp_role [02];
                double Emp_salary;
                char Emp_experince[20];
                char Emp_comp_name[20];
                char Emp_address[20];
                char Emp_email[20];
                char Emp_contact[10];

public:
    void set_dataA()
    {
        cout << endl <<"ENTER YOUR ID = ";
        cin >> this->Emp_id;
        fflush(stdin);
        cout << "ENTER YOUR NAME = ";
        gets(this->Emp_name);
        cout << "ENTER YOUR ROLE = ";
        cin >> this->Emp_role;
    }
};

class B : public A
{
public:
    void set_dataB()
    {
        cout << "ENTER YOUR SALARY = ";
        cin >> this->Emp_salary;
        fflush(stdin);
        cout << "ENTER YOUR EXPERINCE = ";
        gets (this->Emp_experince);
    }
};

class C : public B
{
    public:
            void set_dataC()
            {
                fflush(stdin);
                cout << "ENTER YOUR COMPANY NAME = ";
                gets(this->Emp_comp_name);
                cout << "ENTER YOUR ADDRESS = ";
                gets(this->Emp_address);
            }

            void get_dataC()
            {
                cout << endl
                    << "|------------------------"
                    <<endl << "|NAME\t\t\t|=" << this->Emp_name << endl
                    << "|------------------------"
                    <<endl << "|ROLE\t\t\t|=" << this->Emp_role << endl
                    << "|------------------------"
                    <<endl << "|SALARY\t\t\t|=" << this->Emp_salary << endl
                    << "|------------------------";
            }
};

class D : public C
{
    public:
            void set_dataD()
            {
                cout << "ENTER YOUR EMAIL = ";
                cin >> this->Emp_email;
                cout << "ENTER YOUR CONTECT NUMBER = ";
                cin >> this->Emp_contact;
            }

            void get_dataD()
            {
                cout
                     << endl << "|ID\t\t\t|=" << this->Emp_id << endl
                     << "|------------------------"
                     << endl << "|ROLE\t\t\t|= " << this->Emp_role << endl
                     << "|------------------------"
                     << endl << "|SALARY\t\t\t|=" << this->Emp_salary << endl
                     << "|------------------------"
                     << endl << "|EXPERINCE\t\t|=" << this->Emp_experince << endl
                     << "|------------------------"
                     << endl << "|COMPANY NAME\t\t|=" << this->Emp_comp_name << endl
                     << "|------------------------"
                     << endl << "|ADDRESS\t\t|=" << this->Emp_address << endl
                     << "|------------------------"
                     << endl << "|EMAIL\t\t\t|=" << this->Emp_email << endl
                     << "|------------------------"
                     << endl << "|CONTECT\t\t|=" << this->Emp_contact << endl
                     << "|------------------------"; 
            }         
};


int main()
{
    D o;

    o.set_dataA();
    o.set_dataB();
    o.set_dataC();
    o.set_dataD();

    o.get_dataC();
    o.get_dataD();
}