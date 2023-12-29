#include<iostream>
using namespace std;

int Fact(int A)
{
    if(A>1)
    {
        return A*Fact(A-1);
    }
    else
    {
        return 1;
    }

};

int main()
{
    int J;
    cout << "ENTER ANY NUMBER= ";
    cin >> J;

    int fact = Fact(J);
    cout << fact;
}