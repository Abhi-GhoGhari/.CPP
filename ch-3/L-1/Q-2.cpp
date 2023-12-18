#include <iostream>
#include <string.h>
using namespace std;

class Coustemerdata
{

private:
    int cou_id;
    char cou_name[20];
    int cou_age;
    char cou_city[20];
    char cou_mobile_number[20];
    char cou_simcard_validity[20];
    char cou_telecom_brand_name[20];

public:
    void setter()
    {
        cout       << "            |------------------------|";
        cout <<endl<< "            |!!ENTER COUSTEMER DATA!!|";
        cout <<endl<< "            |------------------------|";
        cout << endl << endl << "ENTER COUSTEMER ID=";
        cin >> this->cou_id;
        fflush(stdin);
        cout << "ENTER COUSTEMER NAME=";
        gets(this->cou_name);
        cout << "ENTER COUSTEMER AGE=";
        cin >> this->cou_age;
        fflush(stdin);
        cout << "ENTER COUSTEMER CITY=";
        gets(this->cou_city);
        cout << "ENTER COUSTEMER MOBILE NUMBERL=";
        cin >> this->cou_mobile_number;
        fflush(stdin);
        cout << "ENTER COUSTEMER SIMCARD VELIDITY=";
        gets(this->cou_simcard_validity);
        cout << "ENTER COUSTEMER TELECON BRAND NAME=";
        cin >> this->cou_telecom_brand_name;
    }

    void getter()
    {
        cout << endl
             << " ----------------------------------------"<< endl
             << " |COUSTEMER ID\t\t\t|=" << this->cou_id << endl
             << " ----------------------------------------"<< endl
             << " |COUSTEMER NAME\t\t|=" << this->cou_name << endl
             << " ----------------------------------------"<< endl
             << " |COUSTEMER AGE\t\t\t|=" << this->cou_age << endl
             << " ----------------------------------------"<< endl
             << " |COUSTEMER CITY\t\t|=" << this->cou_city << endl
             << " ----------------------------------------"<< endl
             << " |COUSTEMER MOBILE NUMBER\t|=" << this->cou_mobile_number << endl
             << " -------------------------------------------------"<< endl
             << " |COUSTEMER SIM-CARD VELIDITY\t|=" << this->cou_simcard_validity << endl
             << " ---------------------------------------"<< endl
             << " |COUSTEMER TELICON BRAND NAME\t|=" << this->cou_telecom_brand_name << endl
             << " ----------------------------------------"<< endl;
    }
};

int main()
{

    Coustemerdata cou1,
        cou2,
        cou3,
        cou4,
        cou5;
        
    cou1.setter();
    cou2.setter();
    cou3.setter();
    cou4.setter();
    cou5.setter();

    cou1.getter();
    cou2.getter();
    cou3.getter();
    cou4.getter();
    cou5.getter();
}