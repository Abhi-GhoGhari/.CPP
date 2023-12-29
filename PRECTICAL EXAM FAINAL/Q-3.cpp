#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char messege[20] = "ERROR";
    cout << "ENTER A= ";
    cin >> a;
    cout << "ENTER B= ";
    cin >> b;

    try
    {
        if (b != 0)
            cout << a << " / " << b << " = " << a / b;
        else
            throw messege;
    }
    catch (string s)
    {
        cout << s;
    }
}