#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int E_id;
    char E_name[20];
    int E_age;
    char E_role[20];
    int E_salary;
    char E_city[20];
    char E_experience[20];
    char E_company_name[20];
};

int main()
{
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee E5;

    cout << "ENTER YOUR ID= ";
    cin >> E1.E_id;
    fflush(stdin);
    cout << "ENTER YOUR NAME= ";
    gets(E1.E_name);
    cout << "ENTER YOUR AGE= ";
    cin >> E3.E_age;
    fflush(stdin);
    cout << "ENTER YOUR NAME= ";
    gets(E1.E_name);
}