#include <iostream>
using namespace std;

class Distances
{
public:
    int ft, inh;
};

int main()
{
    Distances d1;
    Distances d2;

    cout << "INPUT 1== \nFEET= ";
    cin >> d1.ft;
    cout << "INCH= ";
    cin >> d1.inh;
    cout << endl
         << "INPUT 2== \nFEET= ";
    cin >> d2.ft;
    cout << "INCH= ";
    cin >> d2.inh;

    int Tfeet = d1.ft + d2.ft;
    int Tinch = d1.inh + d2.inh;

    if (Tfeet >= 12)
    {
        Tinch -= 12;
        Tfeet++;
    }

    cout << "TOTAL LENTH= " << Tfeet << " FEET " << Tinch << "INCH";
}