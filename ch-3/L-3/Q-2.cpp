#include <iostream>
#include <string.h>
using namespace std;

class Cafesystem
{
    char cafe_name[20];
    char cafe_type[20];
    int cafe_rating;
    char cafe_location[80];
    int ccafe_establish_year;
    char cafe_staff_quantity[20];

public:
    void Setcafedata()
    {
        cout << "ENTER CAFE NAME = ";
        cin >> this->cafe_name;
        cout << "ENTER CAFE TYPE = ";
        cin >> this->cafe_type;
        cout << "ENTER CAFE RATING = ";
        cin >> this->cafe_rating;
        fflush(stdin);
        cout << "ENTER CAFE LOCATION = ";
        gets(this->cafe_location);
        cout << "ENTER CAFE ESTABLISH YEAR = ";
        cin >> this->ccafe_establish_year;
        cout << "ENTER CAFE STAFF QUONTITY = ";
        cin >> this->cafe_staff_quantity;
    }
    void getcafedata()
    {
        cout << endl
             << " ----------------------------------------|" << endl
             << " |CAFE NAME\t\t|=" << this->cafe_name << endl
             << " ----------------------------------------|" << endl
             << " |CAFE TYPE\t\t|=" << this->cafe_type << endl
             << " ----------------------------------------|" << endl
             << " |CAFE RATING\t\t|=" << this->cafe_rating << endl
             << " ----------------------------------------|" << endl
             << " |CAFE LOCATION\t\t|=" << this->cafe_location << endl
             << " ----------------------------------------|" << endl
             << " |CAFE ESTABLISH YEAR\t|=" << this->ccafe_establish_year << endl
             << " ----------------------------------------|" << endl
             << " |CAFE STAFF QUONTITY\t|=" << this->cafe_staff_quantity << endl
             << " ----------------------------------------|" << endl;
    }
};

int main()
{
    int C;

    cout << "            |-------------------------|";
    cout << endl
         << "            |   !!ENTER CAFE DATA!!   |";
    cout << endl
         << "            |-------------------------|";
    cout << endl
         << "ENTER NUMBER OF CAFE= ";
    cin >> C;

    Cafesystem cafe[C];
    for (int i = 0; i < C; i++)
    {
        cafe[i].Setcafedata();
    }

    for (int i = 0; i < C; i++)
    {
        cafe[i].getcafedata();
    }
}