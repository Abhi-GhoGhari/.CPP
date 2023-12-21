#include <iostream>
#include <string.h>
using namespace std;

class aaggadi
{
private:
    int aaggadi_number;
    char aaggadi_name[20];
    char aaggadi_Source[20];
    char aaggadi_Destination[20];
    char aaggadi_time[20];

public:
    void setdataaaggadi()
    {
        cout << endl << endl << "ENTER TRAIN NAME=";
        cin >> this->aaggadi_name;
        fflush(stdin);
        cout << "ENTER TRAIN NUMBER=";
        gets(this->aaggadi_name);
        cout << "ENTER TRAIN SOURCE=";
        cin >> this->aaggadi_Source;
        cout << "ENTER TRAIN DESTINATION=";
        cin >> this->aaggadi_Destination;
        cout << "ENTER TRAIN TIME=";
        cin >> this->aaggadi_time;
    }
    void getdataaaggadi()
    {
        cout << endl
             << " |TRAIN NAME\t\t|=" << this->aaggadi_name << endl
             << " |TRAIN NUMBER\t\t|=" << this->aaggadi_number << endl
             << " |TRAIN SOURCE\t\t|=" << this->aaggadi_Source << endl
             << " |TRAIN DESTINATION\t|=" << this->aaggadi_Destination << endl
             << " |TRAIN TIME\t\t|=" << this->aaggadi_time << endl;
    }
};

int main()
{
    aaggadi A1, A2, A3;

    A1.setdataaaggadi();
    A2.setdataaaggadi();
    A3.setdataaaggadi();

    A1.getdataaaggadi();
    A2.getdataaaggadi();
    A3.getdataaaggadi();

    int n;
    up:
    cout << "ENTER TRAIN NUMBER= ";
    cin >> n;

    switch (n)
    {
            case 1:
                    A1.getdataaaggadi();
                    goto up;
            case 2:
                    A2.getdataaaggadi();
                    goto up;
            case 3:
                    A3.getdataaaggadi();
                    goto up;
            default:
                    break;
    }
}
