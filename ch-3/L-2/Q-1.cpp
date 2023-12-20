#include <iostream>
#include <string.h>
using namespace std;

class Hotelsystem
{
    int hot_id;
    char hot_name[20];
    char hot_type[20];
    int hot_rating;
    char hot_location[80];
    int hot_establish_year;
    int hot_staff_quantity;
    int hot_room_quantity;

public:
    void Sethoteldata()
    {
        cout << "ENTER HOTEL ID= ";
        cin >> this->hot_id;
        fflush(stdin);
        cout << "ENTER HOTEL NAME= ";
        gets(this->hot_name);
        cout << "ENTER TYPE OF HOTEL [HOTEL & MOTEL]= ";
        cin >> this->hot_type;
        cout << "ENTER HOTEL RATING= ";
        cin >> this->hot_rating;
        fflush(stdin);
        cout << "ENTER HOTEL LOCATION= ";
        gets(this->hot_location);
        cout << "ENTER ESTABLISH YEAR= ";
        cin >> this->hot_establish_year;
        cout << "ENTER STAFF QUANTITY= ";
        cin >> this->hot_staff_quantity;
        cout << "ENTER ROOM QUANTITY ";
        cin >> this->hot_room_quantity;
    }
    void gethoteldata()
    {
        cout << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL ID\t\t|=" << this->hot_id << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL NAME\t\t|=" << this->hot_name << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL TYPE\t\t|=" << this->hot_type << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL RATING\t\t|=" << this->hot_rating << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL LOCATION\t|=" << this->hot_location << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL ESTABLISH YEAR\t|=" << this->hot_establish_year << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL STAFF QUANTITY\t|=" << this->hot_staff_quantity << endl
             << " ----------------------------------------|" << endl
             << " |HOTEL ROOM QUANTITY\t|=" << this->hot_room_quantity << endl
             << " ----------------------------------------|" << endl;
    }
};

int main()
{
    int M;
    cout << "ENTER NUMBER OF HOTEL= ";
    cin >> M;

    Hotelsystem hotel[M];
    for (int i = 0; i < M; i++)
    {
        hotel[i].Sethoteldata();
    }

    for (int i = 0; i < M; i++)
    {
        hotel[i].gethoteldata();
    }
}