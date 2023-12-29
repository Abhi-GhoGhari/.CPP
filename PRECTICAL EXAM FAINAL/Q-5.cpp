#include <iostream>
#include <string.h>
using namespace std;

class Hotelsystem
{
        int hot_number;
        char hot_name[20];
        char hot_type[20];
        int hot_rating;
        char hot_location[80];
public:
        void Sethoteldata()
        {
                cout << "ENTER HOTEL NUMBER= ";
                cin >> this->;
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
        }
        void gethoteldata()
        {
                cout << endl
                     << " |HOTEL NUMBER\t\t|=" << this->hot_id << endl
                     << " |HOTEL NAME\t\t|=" << this->hot_name << endl
                     << " |HOTEL TYPE\t\t|=" << this->hot_type << endl
                     << " |HOTEL RATING\t\t|=" << this->hot_rating << endl
                     << " |HOTEL LOCATION\t|=" << this->hot_location << end;

        }
};

int main()
{
        int M;
        cout << endl<< " !!ENTER HOTEL DATA!!";
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
