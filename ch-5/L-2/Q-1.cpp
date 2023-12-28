#include<iostream>
using namespace std;

class Number_system
{
    public:
            int a;

            void setdata_number()
            {
                cout << "ENTER NUMBER = "; 
                cin >> a;
            }
            bool operator<(Number_system num)
            {
                if (a < num.a)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
};

int main()
{
    Number_system num1, num2;
    
    num1.setdata_number();
    num2.setdata_number();

    if(num1 < num2)
    {
        cout << endl << "|-------------------------------|";
        cout << endl << "|NUMBER 2 IS MAXIMUM VALUE......|";
        cout << endl <<"|-------------------------------|";
    }
    else
    {
        cout << endl << "|-------------------------------|";
        cout << endl << "|NUMBER 1 IS MEXIMUM VAALUE.....|";
        cout << endl << "|-------------------------------|";
    }
}